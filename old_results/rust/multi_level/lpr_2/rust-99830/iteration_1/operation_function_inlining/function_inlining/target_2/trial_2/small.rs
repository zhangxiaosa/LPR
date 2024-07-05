use primal_sieve::Primes;

fn main() {
    let b = 4;
    let mut c = d(1);
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {}",
                in(reg) d::G,
                inout("eax") (c.0 * d(e).0) => _,
                inout("edx") c.0
            );
        }
    });
    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
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
}