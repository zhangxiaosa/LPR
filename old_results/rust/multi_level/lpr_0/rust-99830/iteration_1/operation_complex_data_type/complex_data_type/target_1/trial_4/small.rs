use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c = 1u32;
    Primes::all().take_while(|&e| e < 4usize).for_each(|e| {
        let e = e as u32;
        let pow_result = e.pow(2 * (4 / e)) + 1;
        c *= pow_result;
    });
    assert_eq!(c, 650);
}

struct d(u32);

impl d {
    const g: u32 = 10u32.pow(9);

    fn pow(self, mut exp: u32) -> u32 {
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
    type Output = u32;

    fn add(mut self, other: u32) -> u32 {
        self.0 += other;
        self.0
    }
}

impl MulAssign for d {
    fn mul_assign(&mut self, other: u32) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) Self::g,
                inout("eax") other => _,
                inout("edx") self.0
            );
        }
    }
}