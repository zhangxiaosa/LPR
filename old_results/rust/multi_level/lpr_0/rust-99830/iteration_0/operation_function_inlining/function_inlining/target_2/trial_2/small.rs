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

        // Inlined body of mul_assign
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) d::g,
                inout("eax") d::from(e).0 => _,
                inout("edx") c.0
            );
        }

        let mut base = c;
        base *= base;
        let mut acc = base;

        for _ in 0..(f - 1) {
            base *= base;
            acc *= base;
        }

        c = d::from(acc);
        c += d(1);
    });

    c.0
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const g: u32 = 10u32.pow(9);
    
    fn from(value: u32) -> Self {
        d(value)
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
        // Not used since the function is inlined
    }
}

impl d {
    fn pow(self, mut exp: u32) -> Self {
        let mut base = self;

        base *= base;
        let mut acc = base;

        for _ in 0..(exp - 1) {
            base *= base;
            acc *= base;
        }

        acc
    }
}