use primal_sieve::Primes;

fn main() {
    let b = 4;
    let mut c = d(1);

    const UNROLL_FACTOR: usize = 2; // Set the loop unrolling factor

    // Manually unrolled loop
    let primes = Primes::all().take_while(|&e| e < b as usize);
    let mut iter = primes.clone();
    loop {
        let (e1, e2): (usize, usize) = (iter.next().unwrap(), iter.next().unwrap_or(e1));
        let f1 = b / e1 as u32;
        let f2 = b / e2 as u32;

        c *= d(e1 as u32).pow(2 * f1) + d(1);
        c *= d(e2 as u32).pow(2 * f2) + d(1);

        if let Some(e) = iter.next() {
            let f = b / e as u32;
            c *= d(e as u32).pow(2 * f) + d(1);
        }
        else {
            break;
        }

        // Unroll the loop for the remaining iterations
        for _ in 0..(UNROLL_FACTOR - 1) {
            let (e1, e2): (usize, usize) = (iter.next().unwrap(), iter.next().unwrap());
            let f1 = b / e1 as u32;
            let f2 = b / e2 as u32;

            c *= d(e1 as u32).pow(2 * f1) + d(1);
            c *= d(e2 as u32).pow(2 * f2) + d(1);
        }
    }

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