use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c = 1;
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let exp = 8 / e as u32;
        let base = c * c;
        let mut acc = base;
        if exp >= 1 {
            acc *= base;
        }
        c *= 1000000000;
        acc *= c;
        c = acc;
    });
    assert_eq!(c, 650);
}

impl Add for u32 {
    type Output = u32;
    fn add(self, other: u32) -> u32 {
        self + other
    }
}

impl MulAssign for u32 {
    fn mul_assign(&mut self, other: u32) {
        let mut val = *self as u64;
        val *= other as u64;
        *self = (val % 1000000000) as u32;
    }
}