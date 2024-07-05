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

        let mut base = d(e);
        let mut exp = 2 * f;
        let mut acc = base;
        while exp > 1 {
            base.mul_assign(base);
            exp >>= 1;
            if exp & 1 != 0 {
                acc.mul_assign(base);
            }
        }
        c.mul_assign(acc + d(1));
    });

    c.0
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const G: u32 = 1000000000;

    fn mul_assign(&mut self, h: d) {
        unsafe {
            core::arch::asm!
            (
                "mul edx",
                "div {:e}",
                in(reg) Self::G,
                inout("eax") h.0 => _,
                inout("edx") self.0
            );
        }
    }
}

impl Add for d {
    type Output = d;

    fn add(mut self, h: d) -> d {
        self.0 += h.0;
        self
    }
}
