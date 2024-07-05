use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c = D(1);
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let e = e as u32;
        let f = 4 / e;
        c *= D(e).pow(2 * f) + D(1);
    });
    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct D(u32);

const G: u32 = 1_000_000_000;

impl Add for D {
    type Output = D;

    fn add(mut self, h: D) -> D {
        self.0 += h.0;
        self
    }
}

impl MulAssign for D {
    fn mul_assign(&mut self, h: D) {
        let mut eax: u32;
        let mut edx: u32 = 0;
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {0:e}",
                in(reg) G,
                inout("eax") h.0 => eax,
                inout("edx") edx
            );
        }
        self.0 = edx;
    }
}

impl D {
    fn pow(mut self, mut exp: u32) -> D {
        let base = self;
        let mut acc = D(1);
        while exp > 0 {
            if exp % 2 == 1 {
                acc *= base;
            }
            self *= self;
            exp /= 2;
        }
        acc
    }
}