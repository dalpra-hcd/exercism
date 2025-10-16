pub fn check(candidate: &str) -> bool {
    let mut seen: u32 = 0;

    for ch in candidate.chars() {
        if !ch.is_alphabetic() {
            continue;
        }

        let bit: u8 = ch.to_ascii_lowercase() as u8 - b'a';
        if bit >= 26 {
            return false;
        }

        let mask: u32 = 1 << bit;
        if seen & mask != 0 {
            return false;
        }
        seen |= mask;
    }

    true
}
