use std::ops::{Add, MulAssign};

fn main() {
    let mut c: u32 = 1;
    Primes::all().take_while(|&e| e < 4usize).for_each(|e| {
        let e = e as u32;
        let mut other: u32 = e.pow(2 * (4 / e)) + 1;
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) 10u32.pow(9),
                inout("eax") &mut other,
                inout("edx") &mut c,
            );
        }
    });
    assert_eq!(c, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl Into<u32> for d {
    fn into(self) -> u32 {
        self.0
    }
}

impl Add<u32> for u32 {
    type Output = u32;

    fn add(mut self, other: u32) -> u32 {
        self += other;
        self
    }
}

impl MulAssign<u32> for u32 {
    fn mul_assign(&mut self, other: u32) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) 10u32.pow(9),
                inout("eax") &mut *other => _,
                inout("edx") &mut *self,
            );
        }
    }
}