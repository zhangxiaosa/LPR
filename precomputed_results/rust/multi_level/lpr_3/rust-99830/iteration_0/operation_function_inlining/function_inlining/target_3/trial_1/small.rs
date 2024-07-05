use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = 1;
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        c *= d_mul(d(e), 2 * f) + 1;
    });
    c
}

impl MulAssign for u32 {
    fn mul_assign(&mut self, h: u32) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) 10u32.pow(9),
                inout("eax") h => _,
                inout("edx") *self
            );
        }
    }
}

fn d_mul(mut base: u32, mut exp: u32) -> u32 {
    let mut acc = base;
    exp >>= 1;
    base *= base;
    if exp == 1 {
        acc *= base;
    }
    acc
}