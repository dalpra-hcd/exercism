package isogram

import "unicode"

func IsIsogram(word string) bool {
	if word == "" {
		return true
	}

	var seen uint32

	for _, r := range word {
		if !unicode.IsLetter(r) {
			continue
		}

		r = unicode.ToLower(r)
		if r < 'a' || r > 'z' {
			return false
		}

		bit := uint32(1) << (r - 'a')
		if seen&bit != 0 {
			return false
		}
		seen |= bit
	}

	return true
}
