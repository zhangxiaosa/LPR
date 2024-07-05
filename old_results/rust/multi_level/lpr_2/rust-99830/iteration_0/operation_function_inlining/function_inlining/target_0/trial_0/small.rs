use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let b = 4;
    let mut c = d::new(1);
    Primes::iterator().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        c.mul_assign(c.pow(2 * f).add(d::new(1)));
    });
    let result = c;
    assert_eq!(result, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const g: u32 = 10u32.pow(9);

    fn new(val: u32) -> Self {
        d(val)
    }

    fn pow(self, mut exp: u32) -> Self {
        let mut base = self;
        base.mul_assign(base);
        exp >>= 1;
        let mut acc = base;
        exp >>= 1;
        base.mul_assign(base);
        if exp == 1 {
            acc.mul_assign(base);
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
                inout("eax") other.0 => _,
                inout("edx") self.0
            );
        }
    }
}