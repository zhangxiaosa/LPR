use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c = d { 0: 1 };
    Primes::all().take_while(|&e| e < 4usize).for_each(|e| {
        let e = e as u32;
        let pow_result = d { 0: e }.pow(2 * (4 / e)) + d { 0: 1 };
        c *= pow_result;
    });
    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const G: u32 = 10u32.pow(9);

    fn pow(mut self, mut exp: u32) -> Self {
        let mut acc = self;
        acc *= acc;
        exp >>= 1;
        acc *= acc;
        if exp == 1 {
            acc *= acc;
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