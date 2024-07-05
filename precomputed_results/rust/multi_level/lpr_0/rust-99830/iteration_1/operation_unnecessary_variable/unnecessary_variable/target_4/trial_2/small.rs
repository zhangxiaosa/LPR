use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c = d { 0: 1 };
    Primes::all().take_while(|&e| e < 4usize).for_each(|e| {
        let e = e as u32;
        let pow_result = match e {
            0 => d { 0: 0 }.pow(2 * (4 / e)) + d { 0: 1 },
            1 => d { 0: 1 }.pow(2 * (4 / e)) + d { 0: 1 },
            2 => d { 0: 2 }.pow(2 * (4 / e)) + d { 0: 1 },
            3 => d { 0: 3 }.pow(2 * (4 / e)) + d { 0: 1 },
            _ => unreachable!(),
        };
        c *= pow_result;
    });
    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const g: u32 = 10u32.pow(9);

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
                in(reg) Self::g,
                inout("eax") 4u32 => _,
                inout("edx") self.0
            );
        }
    }
}