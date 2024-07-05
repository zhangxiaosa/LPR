use primal_sieve::Primes;
use std::ops::{Add, MulAssign};
fn main() {
    let mut c = 1u32;
    Primes::all()
        .take_while(|&e| e < 4)
        .for_each(|e| c.mul_assign(e as u32).pow(8 / e as u32) + 1u32);
    assert_eq!(c, 650);
}
#[derive(Clone, Copy)]
struct u32(u32);
impl u32 {
    const g: u32 = 1000000000;
}
impl Add for u32 {
    type Output = u32;
    fn add(mut self, h: u32) -> u32 {
        self.0 += h;
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