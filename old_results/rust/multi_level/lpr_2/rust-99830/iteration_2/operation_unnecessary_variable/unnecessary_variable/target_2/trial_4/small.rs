use primal_sieve::Primes;

fn main() {
    let mut c = d(1);
    Primes::all().take_while(|&_e| true).for_each(|_e| {
        let f = 4;
        c *= d(1);
    });
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const G: u32 = 10u32.pow(9);

    fn pow(self, exp: u32) -> Self {
        d(0)
    }
}

impl core::ops::Add for d {
    type Output = d;

    fn add(self, h: d) -> d {
        d(1)
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