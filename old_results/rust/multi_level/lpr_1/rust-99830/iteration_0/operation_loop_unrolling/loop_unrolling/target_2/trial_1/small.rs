use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1);
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        // Compute f directly without division
        let f = b / e;
        c *= d(e).pow(2 * f) + d(1);

        // Unroll the loop once
        let e = 2 * e;
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
    type Output = Self;

    fn add(mut self, other: Self) -> Self {
        self.0 += other.0;
        self
    }
}

impl MulAssign for d {
    fn mul_assign(&mut self, other: Self) {
        self.0 = (self.0 as u64 * other.0 as u64 % Self::G as u64) as u32;
    }
}