fn main() {
    let mut c = d(1);
    Primes::all().take_while(|&e| e < 4usize).for_each(|e| {
        let e = e as u32;
        let pow_result = {
            let mut base = d(e);
            base *= base;
            let mut exp = 2 * (4 / e);
            exp >>= 1;
            let mut acc = base;
            exp >>= 1;
            base *= base;
            if exp == 1 {
                acc *= base;
            }
            acc
        };
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) d::g,
                inout("eax") pow_result.0 => _,
                inout("edx") c.0
            );
        }
    });
    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const g: u32 = 10u32.pow(9);
}

impl MulAssign for d {
    fn mul_assign(&mut self, other: d) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) Self::g,
                inout("eax") other.0 => _,
                inout("edx") self.0
            );
        }
    }
}