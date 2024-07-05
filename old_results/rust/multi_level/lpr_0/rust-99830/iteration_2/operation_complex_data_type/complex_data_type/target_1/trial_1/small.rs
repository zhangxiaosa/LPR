use primal_sieve::Primes;

fn main() {
    let mut c = 1u32;
    Primes::all().take_while(|&e| e < 4usize).for_each(|e| {
        let e = e as u32;
        let mut other = e.pow(2 * (4 / e)) + 1u32;
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {}",
                in(reg) d::g,
                inout("eax") &mut other,
                inout("edx") &mut c
            );
        }
    });
    assert_eq!(c, 650);
}

struct d(u32);

impl d {
    const g: u32 = 1000000000;

    fn pow(self, mut exp: u32) -> u32 {
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