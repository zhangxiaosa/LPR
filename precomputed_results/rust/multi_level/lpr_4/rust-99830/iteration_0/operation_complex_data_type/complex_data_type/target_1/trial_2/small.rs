use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c = 1u32;
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let e = e as u32;
        let f = 4 / e;
        c *= e.pow(2 * f) + 1;
    });
    assert_eq!(c, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const g: u32 = 1000000000;
}

impl Add for d {
    type Output = d;
    
    fn add(self, h: d) -> d {
        d(self.0 + h.0)
    }
}

impl MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        unsafe { asm!(
            "mul edx",
            "div {$}",
            in(reg) d::g,
            inout("eax") h.0 => _,
            inout("edx") self.0
        ) };
    }
}

impl d {
    fn pow(mut self, mut exp: u32) -> d {
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
