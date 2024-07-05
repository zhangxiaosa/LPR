fn main() {
    let mut c_value = 1;

    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let e_value = e as u32;
        let f_value = 4 / e_value;
        c_value *= d_pow(2 * f_value) + 1;
    });

    assert_eq!(c_value, 650);
}

fn d_pow(exp: u32) -> u32 {
    let mut base_value = 1;
    let mut exp_value = exp;

    while exp_value > 0 {
        base_value *= base_value;
        exp_value >>= 1;

        if exp_value == 1 {
            base_value *= base_value;
        }
    }

    base_value
}