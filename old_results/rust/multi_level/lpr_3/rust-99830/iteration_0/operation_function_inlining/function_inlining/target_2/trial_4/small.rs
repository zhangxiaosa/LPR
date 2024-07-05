fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1);
    primal::Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) 10u32.pow(9),
                inout("eax") c.0 => _,
                inout("edx") c.0
            );
        }
        let mut base = d(e);
        base *= base;
        let mut exp = f;
        while exp != 0 {
            if exp & 1 == 1 {
                unsafe {
                    core::arch::asm!(
                        "mul edx",
                        "div {:e}",
                        in(reg) 10u32.pow(9),
                        inout("eax") c.0 => _,
                        inout("edx") c.0
                    );
                }
                c *= base;
            }
            base *= base;
            exp >>= 1;
        }
        c *= d(1);
    });
    c.0
}

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