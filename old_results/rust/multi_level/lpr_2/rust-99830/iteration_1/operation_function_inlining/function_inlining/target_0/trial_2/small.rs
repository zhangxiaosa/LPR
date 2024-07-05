fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1);
    (2..b).for_each(|e| {
        let f = b / e;
        let mut base = d(e);
        base *= base;
        let mut exp = 2 * f;
        let mut acc = base;
        exp >>= 1;
        base *= base;
        if exp == 1 {
            acc *= base;
        }
        c *= acc + d(1);
    });
    c.0
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const G: u32 = 10u32.pow(9);
    
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

impl MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        self.mul_assign(h);
    }
}