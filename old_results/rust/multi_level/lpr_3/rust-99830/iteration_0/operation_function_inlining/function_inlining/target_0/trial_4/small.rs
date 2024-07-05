use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1);

    let primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47];

    for &e in primes.iter().take_while(|&&e| e < b) {
        let e = e as u32;
        let f = b / e;
        c *= d(e).pow(2 * f) + d(1);
    }

    c.0
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const g: u32 = 1_000_000_000;
}

impl Add for d {
    type Output = d;

    fn add(mut self, h: d) -> d {
        self.0 += h.0;
        self
    }
}

impl MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        self.0 *= h.0;
        self.0 /= d::g;
    }
}

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
