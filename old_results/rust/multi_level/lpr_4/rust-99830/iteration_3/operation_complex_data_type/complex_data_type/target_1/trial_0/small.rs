use primal_sieve::Primes;

fn main() {
    let mut c = 1u32;

    Primes::all()
        .take_while(|&_e| _e < 4)
        .for_each(|_e| {
            let _e_as_u32 = _e as u32;
            let pow_val = 2 * (4 / _e_as_u32);
            let d_e_pow = _e_as_u32.pow(pow_val) + 1;
            c *= d_e_pow;
        });

    assert_eq!(c, 650);
}