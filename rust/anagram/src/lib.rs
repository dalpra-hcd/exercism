use itertools::Itertools;
use std::collections::HashSet;

fn sort(word: &str) -> String {
    word.chars().sorted().collect()
}

pub fn anagrams_for<'a>(word: &str, possible_anagrams: &'a [&str]) -> HashSet<&'a str> {
    let w_lower = word.to_lowercase();
    let mut anagrams = HashSet::with_capacity(possible_anagrams.len());

    for &candidate in possible_anagrams {
        let c_lower = candidate.to_lowercase();
        if c_lower.len() != w_lower.len() {
            continue;
        }

        if c_lower == w_lower {
            continue;
        }

        if sort(&c_lower) == sort(&w_lower) {
            anagrams.insert(candidate);
        }
    }

    anagrams
}
