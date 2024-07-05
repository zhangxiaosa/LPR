use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let b_usize = b as usize;
    let mut c = d(1);
    let mut f = 0;

    let primes = Primes::all().take_while(|&e| e < b_usize);

    for e in primes {
        let e = e as u32;
        
        let f1 = 2 * f;
        let pow1 = d(e).pow(f1);
        c *= pow1 + d(1);

        let f2 = 2 * f1;
        let pow2 = d(e).pow(f2);
        c *= pow2 + d(1);

        let f3 = 2 * f2;
        let pow3 = d(e).pow(f3);
        c *= pow3 + d(1);

        f += 3;
    }

    c.0
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
                in(reg) Self::g,
                inout("eax") h.0 => _,
                inout("edx") self.0
            );
        }
    }
}