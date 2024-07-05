use primal_sieve::Primes;

fn main() {
    let b: i32 = 4;
    let mut c: u32 = d(1).0;
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e: u32 = e as u32;
        let f: i32 = b as i32 / e as i32;
        let base: u32 = d(e).pow(2 * f).0;
        c = c.wrapping_mul(base.wrapping_add(1));
    });
    assert_eq!(c, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const G: u32 = 1_000_000_000;

    fn pow(self, mut exp: i32) -> d {
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

impl core::ops::Add for d {
    type Output = d;

    fn add(self, h: d) -> d {
        d(self.0.wrapping_add(h.0))
    }
}

impl core::ops::MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        let mut edx: u32;
        unsafe {
            asm!(
                "mul edx",
                "div {g}",
                in("eax") self.0,
                in("edx") h.0,
                in(g) const d::G,
                out("eax") self.0,
                out("edx") edx,
            );
        }
    }
}