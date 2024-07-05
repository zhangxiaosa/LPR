use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1);
    (2..b).filter(|&e| is_prime(e)).for_each(|e| {
        let f = b / e;
        c *= d(e).pow(2 * f) + d(1);
    });
    c.0
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const G: u32 = 10u32.pow(9);

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

    fn add(self, h: d) -> d {
        d(self.0 + h.0)
    }
}

impl MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        let (result, overflow) = self.0.overflowing_mul(h.0);
        self.0 = result / d::G;
    }
}

fn is_prime(n: u32) -> bool {
    if n < 2 {
        return false;
    }
    let max = (n as f64).sqrt().ceil() as u32;
    (2..=max).all(|i| n % i != 0)
}