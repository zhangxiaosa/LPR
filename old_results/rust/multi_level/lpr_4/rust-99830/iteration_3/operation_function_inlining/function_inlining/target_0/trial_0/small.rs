use primal_sieve::Primes;
use std::ops::MulAssign;

#[derive(Clone, Copy)]
struct d(u32);

impl MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {0:e}",
                in(reg) 1_000_000_000,
                inout("eax") h.0 => _,
                inout("edx") self.0
            );
        }
    }
}

impl d {
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

fn main() {
    let mut c = d(1);
    Primes::all()
        .take_while(|&e| e < 4)
        .for_each(|e| {
            let h = d(e as u32).pow(2 * (4 / e as u32)) + d(1);
            c.0 += h.0;
        });
    assert_eq!(c.0, 650);
}