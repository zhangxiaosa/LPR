use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

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

fn main() {
    let mut c = d(1);
    Primes::all()
        .take_while(|&_e| _e < 4)
        .for_each(|_e| {
            let mut exp = 2 * (4 / _e as u32);
            let mut base = d(_e as u32);
            let mut acc = base;

            base *= base;
            acc = acc * base;
            
            exp >>= 1;
            base *= base;
            
            if exp == 1 {
                acc *= base;
            }

            c *= acc + d(1);
        });

    assert_eq!(c.0, 650);
}