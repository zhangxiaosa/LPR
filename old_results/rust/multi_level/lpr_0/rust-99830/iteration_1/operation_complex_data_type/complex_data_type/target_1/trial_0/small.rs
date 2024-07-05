use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c: u32 = 1;
    Primes::all().take_while(|&e| e < 4usize).for_each(|e| {
        let e = e as u32;
        let pow_result = e.pow(2 * (4 / e)) + 1;
        c *= pow_result;
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
        *self *= other;
    }
}