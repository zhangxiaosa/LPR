use primal_sieve::Primes;

fn main() {
    let mut c: u32 = 1;
    let primes_iter = Primes::all();
    primes_iter
        .take_while(|&_e| _e < 4)
        .for_each(|_e| {
            let d_e_u32: u32 = _e as u32;
            let d_e_pow: u32 = d(d_e_u32).pow(2 * (4 / d_e_u32)) + 1;
            c *= d_e_pow;
        });
    assert_eq!(c, 650);
}

struct d(u32);

impl d {
    fn pow(self, mut exp: u32) -> Self {
        let mut base = self;
        base *= base;
        exp >>= 1;
        let mut acc = base;
        exp >>= 1;
        base *= base;
        if exp == 1 {
            acc *= base;
        }
        acc
    }
}
