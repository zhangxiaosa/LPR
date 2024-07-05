fn main() {
    let b = 4;
    let mut c = d(1);
    {
        let mut acc = d(1);
        Primes::all()
            .take_while(|&e| e < b as usize)
            .for_each(|e| {
                let e = e as u32;
                let f = b / e;
                let mut base = d(e);
                base *= base;
                let mut exp = f;
                exp >>= 1;
                let mut acc_inner = base;
                exp >>= 1;
                base *= base;
                if exp == 1 {
                    acc_inner *= base;
                }
                acc = acc_inner;
                c *= acc + d(1);
            });
    }
    assert_eq!(c.0, 650);
}

struct d(u32);

impl d {
    const G: u32 = 10u32.pow(9);

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