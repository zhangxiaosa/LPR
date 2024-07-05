use primal_sieve::Primes;
use std::ops::MulAssign;

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1);
    let acc = {
        let mut acc = c;
        Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
            let e = e as u32;
            let f = b / e;
            acc *= d(e).pow(2 * f) + d(1);
        });
        acc
    };
    acc.0
}

#[derive(Clone, Copy)]
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

impl MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        self.0 *= h.0;
    }
}