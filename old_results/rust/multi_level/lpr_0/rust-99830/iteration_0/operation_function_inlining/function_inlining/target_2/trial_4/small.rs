use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1);
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        let mut temp = d(e).pow(2 * f) + d(1);
        c.mul_assign(temp);
    });
    c.0
}

#[derive(Clone, Copy)]
struct d(u32);
impl d {
    const g: u32 = 10u32.pow(9);
}

impl Add for d {
    type Output = d;
    fn add(mut self, h: d) -> d {
        self.0 += h.0;
        self
    }
}

impl MulAssign for d {
    fn mul_assign(&mut self, mut h: d) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) Self::g,
                inout("eax") h.0 => "eax",
                inout("edx") self.0
            );
        }
    }
}

impl d {
    fn pow(mut self, mut exp: u32) -> d {
        let mut base = self;
        let mut temp = d(base.0);
        temp.mul_assign(d(base.0));
        base = temp;
        exp >>= 1;
        let mut acc = base;
        exp >>= 1;
        let mut temp = d(base.0);
        temp.mul_assign(d(base.0));
        base = temp;
        if exp == 1 {
            let mut temp = d(acc.0);
            temp.mul_assign(d(base.0));
            acc = temp;
        }
        acc
    }
}