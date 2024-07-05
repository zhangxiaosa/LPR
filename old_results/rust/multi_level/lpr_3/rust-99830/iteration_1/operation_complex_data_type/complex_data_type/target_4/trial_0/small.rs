use primal_sieve::Primes;

use std::ops::{Add, MulAssign};

fn main() {
    let mut c_val: u32 = d_val(1);
    Primes::all().take_while(|&e_val| e_val < 4).for_each(|e_val| {
        let f_val: u32 = 4 / e_val as u32;
        c_val *= d_val(e_val as u32).pow(2 * f_val) + d_val(1);
    });
    assert_eq!(c_val, 650);
}

#[derive(Clone, Copy)]
struct d_val(u32);

impl d_val {
    const g: u32 = 1000000000;
}

impl Add for d_val {
    type Output = d_val;

    fn add(mut self, h: d_val) -> d_val {
        self.0 += h.0;
        self
    }
}

impl MulAssign for d_val {
    fn mul_assign(&mut self, h: d_val) {
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

impl d_val {
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