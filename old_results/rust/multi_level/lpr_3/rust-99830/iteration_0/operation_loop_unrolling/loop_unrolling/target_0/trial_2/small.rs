use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1);
    let primes = Primes::all();
    let mut primes_iter = primes.iter();
    
    while let Some(e1) = primes_iter.next() {
        let e1 = *e1 as u32;
        if e1 >= b {
            break;
        }
        
        let f1 = b / e1;
        c *= d(e1).pow(2 * f1) + d(1);
        
        if let Some(e2) = primes_iter.next() {
            let e2 = *e2 as u32;
            if e2 >= b {
                c *= d(e1).pow(f1) + d(1);
                break;
            }
            
            let f2 = b / e2;
            c *= d(e2).pow(2 * f2) + d(1);
        } else {
            c *= d(e1).pow(f1) + d(1);
            break;
        }
    }
    
    c.0
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const g: u32 = 10u32.pow(9);
}

impl Add for d {
    type Output = d;

    fn add(mut self, h: d) -> d {
        self.0 += h.0;
        self
    }
}

impl MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {:e}",
                in(reg) Self::g,
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