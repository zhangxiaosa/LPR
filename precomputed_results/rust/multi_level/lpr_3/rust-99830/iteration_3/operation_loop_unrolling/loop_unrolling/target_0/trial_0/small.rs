use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c = d(1);
    Primes::all()
        .take_while(|&e| e < 4)
        .for_each(|e| c.mul_assign(d(e as u32).pow(8 / e as u32) + d(1)));
    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const g: u32 = 1000000000;
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
                in(reg) Self::g,
                inout("eax") h.0 => _,
                inout("edx") self.0
            );
        }
    }
}

impl d {
    fn pow(self, exp: u32) -> Self {
        let mut base = self;
        base *= base;
        let mut acc = base;
        base *= base;

        if exp % 2 == 1 {
            acc *= base;
        }

        acc
    }
}

// Function extracted from the loop body
fn loop_body(c: &mut d, e: u32) {
    c.mul_assign(d(e).pow(8 / e) + d(1));
}

fn main() {
    let mut c = d(1);

    // Loop unrolling
    loop_body(&mut c, 2);
    loop_body(&mut c, 3);

    assert_eq!(c.0, 650);
}
