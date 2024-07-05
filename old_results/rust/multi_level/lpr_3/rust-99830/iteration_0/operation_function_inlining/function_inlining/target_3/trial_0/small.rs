use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

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

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1);
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        let mut base = d(2 * f);
        base *= base;
        let mut acc = base;
        acc *= d(2 * f);
        acc += d(1);
        c *= acc;
    });
    c.0
}