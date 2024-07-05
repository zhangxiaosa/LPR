use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c = d(1);
    Primes::all().for_each(|_e| {
        if _e < 4 {
            let e_u32 = _e as u32;
            let pow_exp = 2 * (4 / e_u32);
            let mut temp = d(e_u32).pow(pow_exp) + d(1);
            c *= temp;

            // Additional loop unroll iterations
            match _e {
                0 => {
                    let temp = d(e_u32).pow(pow_exp) + d(1);
                    c *= temp;
                }
                1 => {
                    let temp = d(e_u32).pow(pow_exp) + d(1);
                    c *= temp;
                }
                2 => {
                    let temp = d(e_u32).pow(pow_exp) + d(1);
                    c *= temp;
                }
                3 => {
                    let temp = d(e_u32).pow(pow_exp) + d(1);
                    c *= temp;
                }
                _ => (),
            }
        }
    });

    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

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
                in(reg) 1_000_000_000,
                inout("eax") h.0 => _,
                inout("edx") self.0
            );
        }
    }
}

impl d {
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