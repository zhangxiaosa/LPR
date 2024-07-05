use primal_sieve::Primes;
use std::ops::{Add, MulAssign};
fn main() {
    assert_eq!(a(4), 650);
}
fn a(b: u32) -> u32 {
    let mut c = 1u32;
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        c *= (e as u32).pow(2 * f) + 1u32;
    });
    c.0
}
#[derive(Clone, Copy)]
struct d(u32);
impl Add for u32 {
    type Output = u32;
    fn add(mut self, h: u32) -> u32 {
        self.0 += h.0;
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
                inout("eax") h.0 => _,
                inout("edx") self.0
            );
        }
    }
}
impl u32 {
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