use primal_sieve::Primes;
use std::ops::{Add, MulAssign};

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1);
    let primes = Primes::all();
    
    let primes_iter = primes.iter();
    let mut primes_sum = 0;
    let mut primes_product = d(1);
    
    for &e in primes_iter {
        let e = e as u32;
        
        // Loop-independent computation
        let d_e = d(e);
        let pow_exp = b / e;
        
        primes_sum += e;
        primes_product.mul_assign(d_e.pow(2 * pow_exp) + d(1));
        
        if e >= b as usize {
            break;
        }
        
        primes_sum += e;
        primes_product.mul_assign(d_e.pow(2 * pow_exp) + d(1));
        
        if e >= b as usize {
            break;
        }
        
        primes_sum += e;
        primes_product.mul_assign(d_e.pow(2 * pow_exp) + d(1));
        
        if e >= b as usize {
            break;
        }
        
        primes_sum += e;
        primes_product.mul_assign(d_e.pow(2 * pow_exp) + d(1));
        
        if e >= b as usize {
            break;
        }
    }
    
    c *= primes_product;
    c.0
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const g: u32 = 10u32.pow(9);

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
            core::arch::asm! (
                "mul edx",
                "div {:e}",
                in(reg) Self::g,
                inout("eax") h.0 => _,
                inout("edx") self.0
            );
        }
    }
}