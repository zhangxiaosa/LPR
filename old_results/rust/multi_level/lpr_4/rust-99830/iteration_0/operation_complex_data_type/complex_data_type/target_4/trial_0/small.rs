use primal_sieve::Primes;

fn main() {
    let mut c = d(1);
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let e = e as u32;
        let f = 4 / e;
        c *= d(e).pow(2 * f) + d(1);
    });
    assert_eq!(c.0, 650);
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

impl d {
    const g: u32 = 10u32.pow(9);
}
