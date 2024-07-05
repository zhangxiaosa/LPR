fn main() {
    let mut c = d(1);
    primal_sieve::Primes::all()
        .take_while(|&_e| _e < 4)
        .for_each(|_e| {
            let mut h = d(_e as u32).pow(2 * (4 / _e as u32)) + d(1);
            unsafe {
                core::arch::asm!(
                    "mul edx",
                    "div {0:e}",
                    in(reg) d::g,
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

    const g: u32 = 10u32.pow(9);
}