use primal_sieve::Primes;

use std::ops::{Add, MulAssign};

fn main() {
    let mut c: u32 = 1;
    let primes = Primes::all();
    primes
        .take_while(|&e| e < 4) // Limit the primes to values less than 4
        .for_each(|e| {
            let f = 4 / e;
            let pow_result = d(e).pow(2 * f) + d(1);
            c *= pow_result.0;
        });
    assert_eq!(c, 650);
}

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

impl d {
    fn pow(self, mut exp: u32) -> d {
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