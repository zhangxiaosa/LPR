fn main() {
    let mut c_value = 1u32;
    let primes = Primes::all().take_while(|&e| e < 4);
    primes.for_each(|e| {
        let e_value = e as u32;
        let f_value = 4 / e_value;
        let pow_value = pow(e_value, 2 * f_value);
        let c_temp = c_value * (pow_value + 1);
        c_value = c_temp;
    });
    assert_eq!(c_value, 650);
}

fn pow(base: u32, exp: u32) -> u32 {
    let mut acc = 1u32;
    let mut exp_value = exp;
    let mut base_value = base;

    while exp_value > 0 {
        if exp_value % 2 == 1 {
            acc *= base_value;
        }
        base_value *= base_value;
        exp_value /= 2;
    }

    acc
}