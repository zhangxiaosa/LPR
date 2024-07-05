use primal_sieve::Primes;
use std::ops::Add;

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1);
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        let mut temp = d(e).pow(2 * f) + d(1);
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) d::g,
                inout("eax") temp.0 => _,
                inout("edx") c.0
            );
        }
    });
    c.0
}

#[derive(Copy, Clone)]
struct d(u32);

impl Add for d {
    type Output = Self;

    fn add(mut self, h: Self) -> Self {
        self.0 += h.0;
        self
    }
}

impl d {
    const g: u32 = 10u32.pow(9);

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