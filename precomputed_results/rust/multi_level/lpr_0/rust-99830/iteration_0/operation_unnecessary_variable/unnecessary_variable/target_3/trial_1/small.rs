fn main() {
    assert_eq!(a(4), 650);
}

#[inline(never)]
fn a(b: u32) -> u32 {
    let mut c = d(1);
    primal_sieve::Primes::all().take_while(|&prime| prime < b as usize).for_each(|prime| {
        let prime_value = prime as u32;
        let f = b / prime_value;
        c *= d(prime_value).pow(2 * f) + d(1);
    });
    c.0
}

struct d(u32);

impl d {
    const g: u32 = 1000000000;
    fn pow(mut self, mut exp: u32) -> Self {
        self *= self;
        exp >>= 1;
        let mut acc = self;
        exp >>= 1;
        self *= self;
        if exp == 1 {
            acc *= self;
        }
        acc
    }
}

impl std::ops::Add for d {
    type Output = d;
    fn add(mut self, h: d) -> d {
        self.0 += h.0;
        self
    }
}

impl std::ops::MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div %2",
                in(reg) Self::g,
                inout("eax") h.0 => _,
                inout("edx") self.0
            );
        }
    }
}