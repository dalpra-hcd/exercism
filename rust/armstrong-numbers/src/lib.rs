pub fn is_armstrong_number(num: u32) -> bool {
    let digits = num.to_string().len() as u32;
    let sum = num
        .to_string()
        .bytes()
        .map(|b| (b - b'0') as u32)
        .map(|b| b.pow(digits))
        .sum::<u32>();

    sum == num
}
