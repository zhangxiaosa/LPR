
use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c_value = d(1);
    let primes_all = Primes::all();
    primes_all
        .take_while(|&_e| _e < 4)
        .for_each(|_e| {
            let e = _e as u32;
            let h_value = d(e).pow(2 * (4 / e)) + d(1);
            c_value *= h_value;
        });
    assert_eq!(c_value.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

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
    fn pow(self, mut exp: u32) -> Self {
        let mut base_value = self;
        base_value *= base_value;
        exp >>= 1;
        let mut acc_value = base_value;
        exp >>= 1;
        base_value *= base_value;
        if exp == 1 {
            acc_value *= base_value;
        }
        acc_value
    }
}

impl d {
    const g: u32 = 1_000_000_000;
}