use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c = 1u32;
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let f = 4 / e as u32;
        c *= (e as u32).pow(2 * f) + 1u32;
    });
    assert_eq!(c, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl Add for u32 {
    fn add(mut self, h: u32) -> u32 {
        self += h;
        self
    }
}

impl MulAssign for u32 {
    fn mul_assign(&mut self, h: u32) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) Self::g,
                inout("eax") h => _,
                inout("edx") self
            );
        }
    }
}

impl d {
    const g: u32 = 10u32.pow(9);
}

impl d {
    fn pow(self, mut exp: u32) -> u32 {
        let mut base: u32 = self;
        exp >>= 1;
        let mut acc: u32 = base;
        exp >>= 1;
        if exp == 1 {
            acc *= base * base;
        }
        acc
    }
}