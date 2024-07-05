use primal_sieve::Primes;

fn main() {
    let b = 4;
    let mut c = d(1);
    let primes = Primes::all();
    
    let mut e = primes.next();
    if let Some(e1) = e {
        let e1 = e1 as u32;
        let f1 = b / e1;
        c *= d(e1).pow(2 * f1) + d(1);
    }
    
    let mut e = primes.next();
    if let Some(e2) = e {
        let e2 = e2 as u32;
        let f2 = b / e2;
        c *= d(e2).pow(2 * f2) + d(1);
    }
    
    let mut e = primes.next();
    if let Some(e3) = e {
        let e3 = e3 as u32;
        let f3 = b / e3;
        c *= d(e3).pow(2 * f3) + d(1);
    }
    
    let mut e = primes.next();
    if let Some(e4) = e {
        let e4 = e4 as u32;
        let f4 = b / e4;
        c *= d(e4).pow(2 * f4) + d(1);
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