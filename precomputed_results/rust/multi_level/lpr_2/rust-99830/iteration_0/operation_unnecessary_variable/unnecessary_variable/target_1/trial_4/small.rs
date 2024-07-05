use primal_sieve::Primes;

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1);
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        c *= d(e).pow(2 * f) + d(1);
    });
    c.0
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const G: u32 = 1000000000;

    fn pow(self, mut exp: u32) -> Self {
        let mut acc = self;

        acc *= acc;
        exp >>= 1;
        let mut base = acc;

        acc *= base;
        exp >>= 1;
        base *= base;
        if exp > 0 {
            acc *= base;
        }

        acc
    }
}

impl Add for d {
    type Output = d;
    fn add(mut self, h: d) -> d {
        self.0 += h.0;
        self
    }
}

impl MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) d::G,
                inout("eax") h.0 => _,
                inout("edx") self.0
            );
        }
    }
}