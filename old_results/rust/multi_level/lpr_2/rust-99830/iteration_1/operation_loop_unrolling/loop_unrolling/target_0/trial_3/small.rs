use primal_sieve::Primes;

fn main() {
    let b = 4;
    let mut c = d(1);
    let mut c1 = c;
    let mut c2 = c;
    let mut c3 = c;
    let mut c4 = c;

    c1 *= d(2).pow(2 * (b / 2)) + d(1);
    c2 *= d(3).pow(2 * (b / 3)) + d(1);
    c3 *= d(5).pow(2 * (b / 5)) + d(1);
    c4 *= d(7).pow(2 * (b / 7)) + d(1);

    c = c1 * c2 * c3 * c4;

    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const G: u32 = 10u32.pow(9);

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