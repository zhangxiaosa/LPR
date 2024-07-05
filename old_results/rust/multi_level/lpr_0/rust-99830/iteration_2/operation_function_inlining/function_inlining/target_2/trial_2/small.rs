use primal_sieve::Primes;
use std::ops::{Add};
fn main() {
    let mut c = d { 0: 1 };
    Primes::all().take_while(|&e| e < 4usize).for_each(|e| {
        let e = e as u32;
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) G,
                inout("eax") e => _,
                inout("edx") c.0
            );
        }
    });
    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

const G: u32 = 10u32.pow(9);

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

impl Add for d {
    type Output = d;
    
    fn add(mut self, other: d) -> d {
        self.0 += other.0;
        self
    }
}