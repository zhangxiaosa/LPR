use primal_sieve::Primes;

fn main() {
    let mut c_value = 1;
    let mut h_value = 0;
    Primes::all()
        .take_while(|&_e| _e < 4)
        .for_each(|_e| {
            let d_e = _e as u32;
            let d_e_pow = 2 * (4 / d_e);
            let d_e_pow_plus_1 = d_e_pow + 1;
            h_value *= d_e_pow_plus_1;
            c_value = c_value + h_value;
        });
    assert_eq!(c_value, 650);
}