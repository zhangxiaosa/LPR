use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c = d(1);
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        c.mul_assign(d(e as u32).pow(1) + d(1));
        c.mul_assign(d(e as u32).pow(2) + d(1));
        c.mul_assign(d(e as u32).pow(3) + d(1));
        c.mul_assign(d(e as u32).pow(4) + d(1));
        c.mul_assign(d(e as u32).pow(5) + d(1));
        c.mul_assign(d(e as u32).pow(6) + d(1));
        c.mul_assign(d(e as u32).pow(7) + d(1));
        c.mul_assign(d(e as u32).pow(8) + d(1));
    });
    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const G: u32 = 1000000000;
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
                in(reg) Self::G,
                inout("eax") h.0 => _,
                inout("edx") self.0
            );
        }
    }
}

impl d {
    fn pow(self, exp: u32) -> Self {
        let mut base = self;
        let mut acc = base;
        base *= base;
        acc *= base;
        let mut exp = exp;
        exp -= 2;

        if exp > 0 {
            let mut carry = base;
            base *= base;

            if exp & 1 != 0 {
                acc *= base;
            }

            exp >>= 1;

            for _ in 0..exp {
                carry *= base;
                acc *= base;
            }
        }

        acc
    }
}
