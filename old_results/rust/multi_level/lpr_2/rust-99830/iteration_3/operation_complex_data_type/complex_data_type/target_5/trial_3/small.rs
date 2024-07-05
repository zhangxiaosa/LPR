use primal_sieve::Primes;

fn main() {
    let mut c_0: u32 = d(1).0;
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let f: u32 = 4 / e as u32;
        let tmp1_0: u32 = d(e as u32).0;
        let tmp2_0: u32 = tmp1_0.pow(2 * f);
        let tmp3_0: u32 = d(1).0;
        let tmp4_0: u32 = tmp2_0 + tmp3_0;
        c_0 *= tmp4_0;
    });
    assert_eq!(c_0, 650);
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