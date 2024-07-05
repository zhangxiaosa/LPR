use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c = d { 0: 1 };
    Primes::all().take_while(|&e| e < 4usize).for_each(|e| {
        let e = e as u32;
        let pow_result = {
            let mut base = d { 0: e };
            base *= base;
            let mut exp = 2 * (4 / e);
            base *= base;
            exp >>= 1;
            let mut acc = base;
            exp >>= 1;
            base *= base;
            if exp == 1 {
                acc *= base;
            }
            acc
        };
        c *= pow_result;
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

impl Add for d {
    type Output = d;

    fn add(mut self, other: d) -> d {
        self.0 += other.0;
        self
    }
}

impl MulAssign for d {
    fn mul_assign(&mut self, other: d) {
        self.0 *= other.0;
        self.0 /= 1_000_000_000;
    }
}
