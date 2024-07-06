use primal_sieve::Primes;
use std::ops::*;
fn main() {
    let mut c = d(1);
    Primes::all()
        .take_while(|&e| e < 4)
        .for_each(|e| c *= d(e as u32).pow(8 / e as u32) + d(1));
    assert_eq!(c.0, 650);
}
#[derive(Clone, Copy)]
struct d(u32);
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
            std ::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) Self   ,
                inout("eax") h.0 => _,
                inout("edx") self.0
            );
        }
    }
}
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
