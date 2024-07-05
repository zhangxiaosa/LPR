fn main() {
    let mut c = 1u32;
    (2..).take_while(|&e| e < 4).for_each(|e| {
        let e = e as u32;
        let f = 4 / e;
        c *= e.pow(2 * f) + 1u32;
    });
    assert_eq!(c, 650);
}

impl Add for u32 {
    type Output = u32;
    fn add(mut self, h: u32) -> u32 {
        self += h;
        self
    }
}

impl MulAssign for u32 {
    fn mul_assign(&mut self, h: u32) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) 10u32.pow(9),
                inout("eax") h => _,
                inout("edx") self
            );
        }
    }
}

impl u32 {
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