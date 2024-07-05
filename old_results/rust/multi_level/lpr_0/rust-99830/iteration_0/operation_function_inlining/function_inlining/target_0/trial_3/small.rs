use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    let mut c = d(u32::default().add(d(1)));
    Primes::all().take_while(|&e| e < 4 as usize).for_each(|e| {
        let e = e as u32;
        let f = 4 / e;
        c.mul_assign(d(e).mul_assign(d(e).mul_assign(d(e).mul_assign(d(e).mul_assign(d(e).mul_assign(d(e).mul_assign(d(e).mul_assign(d(e).mul_assign(d(e).mul_assign(d(e).mul_assign(d(e).mul_assign(d(e).mul_assign(d(e).mul_assign(d(e).mul_assign(d(e).mul_assign(d(e)))))))))))))))).add(d(1));
    });
    c.0;
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const G: u32 = 1_000_000_000;

    fn mul_assign(&mut self, h: d) {
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