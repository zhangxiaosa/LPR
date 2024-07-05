use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c = d(1);
    Primes::all().take_while(|&e| e < 4usize).for_each(|e| {
        let e = e as u32;
        c *= d(e).pow(2 * (4 / e)) + d(1);
    });
    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const G: u32 = 10u32.pow(9);

    fn pow(self, exp: u32) -> Self {
        let mut base = self;
        let mut acc = base;

        for _ in 0..(exp - 1) {
            base *= base;
            acc *= base;
        }

        acc
    }
}

impl Add for d {
    type Output = d;

    fn add(self, other: d) -> d {
        d(self.0 + other.0)
    }
}

impl MulAssign for d {
    fn mul_assign(&mut self, other: d) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) Self::G,
                inout("eax") other.0 => _,
                inout("edx") self.0
            );
        }
    }
}
