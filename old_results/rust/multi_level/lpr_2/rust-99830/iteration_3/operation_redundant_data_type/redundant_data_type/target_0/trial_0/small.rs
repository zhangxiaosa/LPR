use primal_sieve::Primes;

fn main() {
    let mut c = 1;
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let f = 4 / e as u32;
        c *= e.pow(2 * f) + 1;
    });
    assert_eq!(c, 650);
}

impl u32 {
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