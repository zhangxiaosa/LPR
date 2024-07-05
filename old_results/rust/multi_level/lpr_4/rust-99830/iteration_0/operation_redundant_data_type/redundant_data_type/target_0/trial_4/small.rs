use std::ops::{Add, MulAssign};

fn main() {
    let mut c = 1;
    (2..4).for_each(|e| {
        let f = 4 / e;
        c *= e.pow(2 * f) + 1;
    });
    assert_eq!(c, 650);
}

impl MulAssign for u32 {
    fn mul_assign(&mut self, h: u32) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div 1000000000",
                inout("eax") self => _,
                inout("edx") _
            );
        }
    }
}
