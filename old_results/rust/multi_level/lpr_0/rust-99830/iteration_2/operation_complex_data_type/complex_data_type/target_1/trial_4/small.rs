use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c_value: u32 = 1;
    Primes::all().take_while(|&e| e < 4usize).for_each(|e| {
        let e: u32 = e as u32;
        let mut other_value: u32 = e.pow(2 * (4 / e)) + 1;
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) d::g_value,
                inout("eax") other_value,
                inout("edx") c_value
            );
        }
    });
    assert_eq!(c_value, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const g_value: u32 = 10u32.pow(9);

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

impl MulAssign for d {
    fn mul_assign(&mut self, other: d) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) d::g_value,
                inout("eax") other.0 => _,
                inout("edx") self.0
            );
        }
    }
}