use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d::new(1);
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        c *= d::new(e).pow(2 * f) + d::new(1);
    });
    c.0
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const G: u32 = 1_000_000_000;

    fn new(value: u32) -> Self {
        d(value)
    }

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
    type Output = Self;

    fn add(mut self, h: Self) -> Self {
        self.0 += h.0;
        self
    }
}

impl MulAssign for d {
    fn mul_assign(&mut self, h: Self) {
        let quotient: u32;
        let remainder: u32;
        unsafe {
            asm!(
                "mov eax, {}",
                "mov edx, {}",
                "mul edx",
                "div {}",
                "mov {}, eax",
                "mov {}, edx",
                in("{eax}") h.0,
                in("{edx}") self.0,
                in("{mem}") d::G,
                out("{eax}") quotient,
                out("{edx}") remainder,
            );
        }
        self.0 = remainder;
        h.0 = quotient;
    }
}