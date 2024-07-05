use primal_sieve::Primes;

fn main() {
    let mut c = d(1);
    let primes = Primes::all();

    let prime_iter = primes.iter().take_while(|&&e| e < 4);
    
    if let Some(&prime) = prime_iter.next() {
        let f = 4 / prime as u32;
        c *= d(prime as u32).pow(2 * f) + d(1);

        if let Some(&prime) = prime_iter.next() {
            let f = 4 / prime as u32;
            c *= d(prime as u32).pow(2 * f) + d(1);

            if let Some(&prime) = prime_iter.next() {
                let f = 4 / prime as u32;
                c *= d(prime as u32).pow(2 * f) + d(1);

                if let Some(&prime) = prime_iter.next() {
                    let f = 4 / prime as u32;
                    c *= d(prime as u32).pow(2 * f) + d(1);
                }
            }
        }
    }

    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const G: u32 = 10u32.pow(9);

    fn pow(mut self, mut exp: u32) -> Self {
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

    fn add(mut self, h: d) -> d {
        self.0 += h.0;
        self
    }
}

impl core::ops::MulAssign for d {
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