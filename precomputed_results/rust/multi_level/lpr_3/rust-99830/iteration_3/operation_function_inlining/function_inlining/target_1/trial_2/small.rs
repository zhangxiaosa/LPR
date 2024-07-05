use primal_sieve::Primes;
use std::ops::Add;

fn main() {
    let mut c = d(1);
    Primes::all()
        .take_while(|&e| e < 4)
        .for_each(|e| {
            let h = d(e as u32).pow(8 / e as u32) + d(1);
            unsafe {
                core::arch::asm!(
                    "mul edx",
                    "div {:e}",
                    in(reg) d::g,
                    inout("eax") h.0 => _,
                    inout("edx") c.0
                );
            }
        });
    assert_eq!(c, d(650));
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const g: u32 = 1000000000;

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

impl Add for d {
    type Output = d;

    fn add(mut self, h: d) -> d {
        self.0 += h.0;
        self
    }
}