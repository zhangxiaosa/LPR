fn main() {
    let b = 4;
    let mut c = 1;
    primal_sieve::Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        c *= e.pow(2 * f) + 1;
    });
    assert_eq!(c, 650);
}

fn pow(self, mut exp: u32) -> u32 {
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

impl core::ops::Add for u32 {
    type Output = u32;
    fn add(mut self, h: u32) -> u32 {
        self += h;
        self
    }
}

impl core::ops::MulAssign for u32 {
    fn mul_assign(&mut self, h: u32) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {}",
                in(reg) 10u32.pow(9),
                inout("eax") h => _,
                inout("edx") *self
            );
        }
    }
}