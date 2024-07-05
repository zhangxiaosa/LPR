fn main() {
    let b: u32 = 4;
    let mut c: d = d(1);
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e: u32 = e as u32;
        let f: u32 = b / e;
        let base: d = d(e).pow(2 * f);
        c *= base + d(1);
    });
    assert_eq!(c.0, 650);
}

struct d(u32);

impl d {
    const G: u32 = 10u32.pow(9);

    fn pow(self, mut exp: u32) -> Self {
        let mut base: Self = self;
        base *= base;
        exp >>= 1;
        let mut acc: Self = base;
        exp >>= 1;
        base *= base;
        if exp == 1 {
            acc *= base;
        }
        acc
    }
}

impl core::ops::Add for d {
    type Output = Self;

    fn add(mut self, h: Self) -> Self {
        self.0 += h.0;
        self
    }
}

impl core::ops::MulAssign for d {
    fn mul_assign(&mut self, h: Self) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {}",
                in(reg) Self::G,
                inout("eax") h.0 => _,
                inout("edx") self.0
            );
        }
    }
}