use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1);
    let primes = Primes::all().take_while(|&e| e < b as usize);
    let mut iter = primes.clone();

    while let Some(e1) = iter.next() {
        if let Some(e2) = iter.next() {
            let power1 = 2 * (b / e1 as u32);
            let power2 = 2 * (b / e2 as u32);
            c *= (d(e1 as u32).pow(power1) + d(1)) * (d(e2 as u32).pow(power2) + d(1));
        } else {
            let power = 2 * (b / e1 as u32);
            c *= d(e1 as u32).pow(power) + d(1);
        }
    }

    c.0
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const G: u32 = 10u32.pow(9);

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

    fn add(mut self, h: d) -> d {
        self.0 += h.0;
        self
    }
}

impl MulAssign for d {
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