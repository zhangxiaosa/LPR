use primal_sieve::Primes;

fn main() {
    let mut c = 1u32;
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let e = e as u32;
        let f = 4 / e;
        c *= e.pow(2 * f) + 1;
    });
    assert_eq!(c, 650);
}

impl u32 {
    fn pow(self, exp: u32) -> u32 {
        let mut base = self;
        base *= base;
        let mut exp = exp >> 1;
        let mut acc = base;
        base *= base;
        if exp == 1 {
            acc *= base;
        }
        acc
    }
}