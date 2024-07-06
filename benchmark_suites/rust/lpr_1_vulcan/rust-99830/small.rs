use primal_sieve::Primes;
use std::ops::*;
fn main() {
    assert_eq!(a(4), 650);
}
fn a(b: u32) -> u32 {
    let mut c = d(1);
    Primes::all()
        .take_while(|&e| e < b as usize)
        .for_each(|e| c *= d(e as u32).pow(2 * b / e as u32) + d(1));
    c.0
}
#[derive(Clone, Copy)]
struct d(u32);
impl d {
    fn pow(self, mut exp: u32) -> Self {
        let mut base = self;
        base *= self;
        exp >>= 1;
        let mut acc = base;
        exp -= 1;
        base *= acc;
        if exp == 1 {
            acc *= base;
        }
        acc
    }
}
impl Add for d {
    type Output = Self;
    fn add(mut self, h: Self) -> Self {
        self.0 += h.0;
        self
    }
}
impl MulAssign for d {
    fn mul_assign(&mut self, h: Self) {
        unsafe {
            std ::arch::asm!
            (
                "mul edx",
                "div {:e}",
                in(reg) Self   ,
                inout("eax") h.0 => _,
                inout("edx") self.0
            );
        }
    }
}
