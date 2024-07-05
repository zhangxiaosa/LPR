use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c: u32 = 1;
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        c *= (e).pow(2 * f) + 1;
    });
    c
}

impl Add for u32 {
    type Output = u32;

    fn add(&mut self, h: u32) {
        *self += h;
    }
}

impl MulAssign for u32 {
    fn mul_assign(&mut self, h: u32) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) 1000000000u32,
                inout("eax") *h => _,
                inout("edx") *self
            );
        }
    }
}

impl u32 {
    fn pow(&mut self, mut exp: u32) {
        let mut base = *self;
        base *= base;
        exp >>= 1;
        let mut acc = base;
        exp >>= 1;
        base *= base;
        if exp == 1 {
            acc *= base;
        }
        *self = acc;
    }
}