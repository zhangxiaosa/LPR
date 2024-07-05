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

impl d {
    fn pow(self, mut exp: u32) -> Self {
        let mut acc = self;
        acc *= acc;
        exp >>= 1;
        acc *= acc;
        if exp == 1 {
            acc *= acc;
        }
        acc
    }
}

fn main() {
    let mut c = d(1);
    primal_sieve::Primes::all()
        .take_while(|&prime| prime < 4)
        .for_each(|prime| {
            let exp = 2 * (4 / (prime as u32));
            c *= d(prime as u32).pow(exp) + d(1);
        });
    assert_eq!(c.0, 650);
}