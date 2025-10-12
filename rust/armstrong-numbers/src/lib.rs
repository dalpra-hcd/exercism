pub fn is_armstrong_number(num: u32) -> bool {
    let num_digits = (num as f64).log10().floor() as u32 + 1;

    let sum_of_powers = {
        let mut n = num;
        let mut sum = 0;
        while n > 0 {
            let digit = n % 10;
            sum += digit.pow(num_digits);
            n /= 10;
        }
        sum
    };

    sum_of_powers == num
}
