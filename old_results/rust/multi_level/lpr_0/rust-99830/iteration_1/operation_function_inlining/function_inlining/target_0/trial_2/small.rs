fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1);
    primal_sieve::Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let pow_result = {
            let mut base = d(e);
            base *= base;
            let mut exp = 2 * (b / e);
            let mut acc = base;
            exp >>= 1;
            base *= base;
            if exp == 1 {
                acc *= base;
            }
            acc
        };
        c *= pow_result;
    });
    c.0
}

#[derive(Clone, Copy)]
struct d(u32);
impl d {
    const G: u32 = 10u32.pow(9);

    fn new(value: u32) -> Self {
        d(value)
    }
}

impl Add for d {
    type Output = d;
    fn add(mut self, other: d) -> d {
        self.0 += other.0;
        self
    }
}

impl MulAssign for d {
    fn mul_assign(&mut self, other: d) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) Self::G,
                inout("eax") other.0 => _,
                inout("edx") self.0
            );
        }
    }
}