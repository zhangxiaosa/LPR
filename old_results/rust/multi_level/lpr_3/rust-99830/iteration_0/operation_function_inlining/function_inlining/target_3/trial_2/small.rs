use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1);
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        c *= d_multiply(d(1), 2 * f) + d(1);
    });
    c.0
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const G: u32 = 1000000000;
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
        let mut result = (self.0 as u64).wrapping_mul(h.0 as u64);

        result = d_divide(result);

        self.0 = result as u32;
    }
}

fn d_multiply(mut d: d, exp: u32) -> d {
    let mut base = d;
    let mut acc = d;

    for _ in 0..exp {
        acc *= base;
    }

    acc
}

fn d_divide(mut value: u64) -> u64 {
    value /= d::G as u64;

    value
}