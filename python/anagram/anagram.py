def find_anagrams(word, candidates):
    lower_word = word.lower()
    sorted_word = sorted(lower_word)

    for candidate in candidates:
        lower_candidate = candidate.lower()
        if lower_candidate == lower_word:
            continue
        if sorted(lower_candidate) == sorted_word:
            yield candidate
