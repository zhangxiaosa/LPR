use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c = d(1);
    Primes::all().take(4).for_each(|e| {
        let e = e as u32;
        let f = 4 / e;
        let mut base = d(e);
        base *= base;
        let mut acc = base;
        for _ in 0..(f - 1) {
            base *= base;
            acc *= base;
        }
        c *= acc + d(1);
    });
    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const g: u32 = 10u32.pow(9);
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
