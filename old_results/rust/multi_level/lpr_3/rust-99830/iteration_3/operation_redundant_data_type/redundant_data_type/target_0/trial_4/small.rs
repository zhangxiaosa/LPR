fn main() {
    let mut c = 1u32;
    c.mul_assign(1u32.pow(8 / 1u32) + 1u32);
    assert_eq!(c, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const g: u32 = 1000000000;
}

impl core::ops::Add for d {
    type Output = d;

    fn add(mut self, h: d) -> d {
        self.0 += h.0;
        self
    }
}

impl core::ops::MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        unsafe {
            core::arch::asm!("mul edx", "div %1",
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