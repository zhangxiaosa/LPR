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
        c *= d::optimized_pow(2 * f);
    });
    c.0
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const g: u32 = 10u32.pow(9);

    fn optimized_pow(exp: u32) -> Self {
        let mut base = d::optimized_mul(self, self);
        let mut acc = base;
        base = d::optimized_mul(base, base);
        if exp == 1 {
            acc = d::optimized_mul(acc, base);
        }
        acc
    }

    #[inline(always)]
    fn optimized_mul(lhs: Self, rhs: Self) -> Self {
        let mut result = lhs;
        unsafe {
            core::arch::asm!
            (
                "mul edx",
                "div {:e}",
                in(reg) Self::g,
                inout("eax") rhs.0 => _,
                inout("edx") result.0
            );
        }
        result
    }
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
        *self = d::optimized_mul(*self, h);
    }
}