use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c = d(1);
    loop_body(0, &mut c);
    loop_body(1, &mut c);
    loop_body(2, &mut c);
    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const g: u32 = 1000000000;
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

fn loop_body(index: u32, c: &mut d) {
    match index {
        0 => {
            let e = 2;
            let pow_result = d(e as u32).pow(8 / e as u32) + d(1);
            c.mul_assign(pow_result);
        }
        1 => {
            let e = 3;
            let pow_result = d(e as u32).pow(8 / e as u32) + d(1);
            c.mul_assign(pow_result);
        }
        2 => {
            let e = 4;
            let pow_result = d(e as u32).pow(8 / e as u32) + d(1);
            c.mul_assign(pow_result);
        }
        _ => panic!("Invalid iteration index"),
    }
}