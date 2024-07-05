use primal_sieve::Primes;

fn main() {
    let b = 4;
    let mut c = d(1);
    let primes = Primes::all();
    
    // 1st iteration
    if let Some(e) = primes.nth(0) {
        let e = e as u32;
        let f = b / e;
        let base = d(e).pow(2 * f);
        c *= base + d(1);
    }
    
    // 2nd iteration
    if let Some(e) = primes.nth(1) {
        let e = e as u32;
        let f = b / e;
        let base = d(e).pow(2 * f);
        c *= base + d(1);
    }
    
    // 3rd iteration
    if let Some(e) = primes.nth(2) {
        let e = e as u32;
        let f = b / e;
        let base = d(e).pow(2 * f);
        c *= base + d(1);
    }
    
    // 4th iteration
    if let Some(e) = primes.nth(3) {
        let e = e as u32;
        let f = b / e;
        let base = d(e).pow(2 * f);
        c *= base + d(1);
    }
    
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