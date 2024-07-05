use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c = d(1);
    Primes::all()
        .take_while(|&_e| _e < 4)
        .for_each(|_e| {
            c.0 = c.0.wrapping_mul(d::g).wrapping_add(1).wrapping_div_rem(u32::from(_e)).1;

            let mut base = d(u32::from(_e));
            base *= base;
            let mut exp = 4 / (_e as u32);
            exp <<= 1;
            let mut acc = base;
            base *= base;
            exp >>= 1;
            base *= base;
            if exp == 1 {
                acc *= base;
            }
            c *= acc;
        });

    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl Add for d {
    type Output = d;

    fn add(mut self, h: d) -> d {
        self.0 += h.0;
        self
    }
}

impl MulAssign for d {
    fn mul_assign(&mut self, h: d) {
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

impl d {
    const g: u32 = 1_000_000_000;
}