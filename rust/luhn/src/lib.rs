/// Check a Luhn checksum.
pub fn is_valid(code: &str) -> bool {
    let mut sum = 0;
    let mut digits = 0;

    for (i, ch) in code
        .chars()
        .rev()
        .filter(|c| !c.is_whitespace())
        .enumerate()
    {
        if let Some(mut n) = ch.to_digit(10) {
            if i % 2 == 1 {
                n *= 2;
                if n > 9 {
                    n -= 9;
                }
            }
            sum += n;
            digits += 1;
        } else {
            return false;
        }
    }

    digits > 1 && sum % 10 == 0
}
