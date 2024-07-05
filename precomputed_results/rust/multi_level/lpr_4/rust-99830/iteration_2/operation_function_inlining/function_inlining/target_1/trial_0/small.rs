use primal_sieve::Primes;

fn main() {
    let mut c = 1;
    Primes::all()
        .take_while(|&_e| _e < 4)
        .for_each(|_e| {
            c *= {
                let mut base = _e as u32;
                base *= base;
                let mut acc = base;
                base *= base;
                if 1 == 1 {
                    acc *= base;
                }
                acc
            };
        });
    assert_eq!(c, 650);
}