use primal_sieve::Primes;

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d_u32(1);
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        c *= d_u32(e).pow(2 * f) + d_u32(1);
    });
    c.0
}

struct d_u32(u32);

impl d_u32 {
    const G: u32 = 1000000000u32;
}

impl std::ops::Add for d_u32 {
    type Output = d_u32;

    fn add(mut self, h: d_u32) -> d_u32 {
        self.0 += h.0;
        self
    }
}

impl std::ops::MulAssign for d_u32 {
    fn mul_assign(&mut self, h: d_u32) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) Self::G,
                inout("eax") h.0 => _,
                inout("edx") self.0
            );
        }
    }
}

impl d_u32 {
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