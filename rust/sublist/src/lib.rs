#[derive(Debug, PartialEq, Eq)]
pub enum Comparison {
    Equal,
    Sublist,
    Superlist,
    Unequal,
}

pub fn sublist(first_list: &[i32], second_list: &[i32]) -> Comparison {
    if first_list == second_list {
        return Comparison::Equal;
    }
    if contains(first_list, second_list) {
        return Comparison::Superlist;
    }
    if contains(second_list, first_list) {
        return Comparison::Sublist;
    }

    Comparison::Unequal
}

fn contains(longer: &[i32], shorter: &[i32]) -> bool {
    if shorter.is_empty() {
        return true;
    }

    if longer.len() < shorter.len() {
        return false;
    }

    'outer: for i in 0..=longer.len() - shorter.len() {
        for j in 0..shorter.len() {
            if longer[i + j] != shorter[j] {
                continue 'outer;
            }
        }
        return true;
    }

    false
}
