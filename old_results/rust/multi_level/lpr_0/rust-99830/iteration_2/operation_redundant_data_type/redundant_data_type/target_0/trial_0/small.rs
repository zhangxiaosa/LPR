use std::ops::{Add, MulAssign};

fn main() {
    let mut c = 1u32;
    Primes::all().take_while(|&e| e < 4usize).for_each(|e| {
        let e = e as u32;
        let mut other = e.pow(2 * (4 / e)) + 1u32;
        unsafe {
            core::arch::asm!(
              "mul edx",
              "div {:e}",
              in(reg) d::g,
              inout("eax") other,
              inout("edx") c
            );
        }
    });
    assert_eq!(c, 650);
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
    fn add(mut self, other: d) -> d {
        self.0 += other.0;
        self
    }
}
impl MulAssign for d {
    fn mul_assign(&mut self, other: d) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) Self::g,
                inout("eax") other => _,
                inout("edx") self
            );
        }
    }
}