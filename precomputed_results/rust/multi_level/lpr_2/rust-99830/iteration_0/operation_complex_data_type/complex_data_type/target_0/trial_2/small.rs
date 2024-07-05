use primal_sieve::Primes;

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c: u32 = d(1);
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e: u32 = e as u32;
        let f: u32 = b / e;
        c = c * d(e).pow(2 * f) + d(1);
    });
    c
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const g: u32 = 10_000_000_000;
}

impl std::ops::Add for d {
    type Output = d;
    fn add(mut self, h: d) -> d {
        self.0 += h.0;
        self
    }
}

impl std::ops::MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        // Inline assembly to perform multiplication
        unsafe {
            asm!(
                "mul edx",
                "div {g}",
                in("ebx") d::g,
                inout("eax") h.0 => _,
                inout("edx") self.0
            );
        }
    }
}

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