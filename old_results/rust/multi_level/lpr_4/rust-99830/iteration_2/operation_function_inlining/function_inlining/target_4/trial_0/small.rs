use primal_sieve::Primes;

fn main() {
    let mut c = d(1);
    Primes::all()
        .take_while(|&_e| _e < 4)
        .for_each(|_e| {
            let mut base = d(_e as u32);
            base *= base;
            let mut exp = 4 / _e as u32;
            base *= base;
            if exp == 1 {
                base *= base;
            }
            let h = base + d(1);
            unsafe {
                core::arch::asm!(
                    "mul edx",
                    "div 1000000000",
                    inout("eax") h.0 => _,
                    inout("edx") c.0
                );
            }
        });
    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

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

#[derive(Clone, Copy)]
struct d(u32);

impl MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div 1000000000",
                inout("eax") h.0 => _,
                inout("edx") self.0
            );
        }
    }
}