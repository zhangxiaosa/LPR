use primal_sieve::Primes;

fn main() {
    let b: usize = 4;
    let mut c: d = d(1);
    Primes::all().take_while(|&e| e < b).for_each(|e| {
        let e: u32 = e as u32;
        let f: usize = b / e as usize;
        let base: d = d(e).pow(2 * f);
        c.mul_assign(base.add(d(1)));
    });
    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const G: u32 = 10u32.pow(9);

    fn pow(self, mut exp: usize) -> Self {
        let mut base: d = self;
        base.mul_assign(base);
        exp >>= 1;
        let mut acc: d = base;
        exp >>= 1;
        base.mul_assign(base);
        if exp == 1 {
            acc.mul_assign(base);
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
