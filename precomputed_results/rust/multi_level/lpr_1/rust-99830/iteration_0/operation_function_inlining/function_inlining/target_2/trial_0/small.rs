use primal_sieve::Primes;  
use std::ops::{Add, MulAssign};  
  
const G: u32 = 10_000_000_000;  
  
fn main() {  
    let mut c = d(1);  
    Primes::all().take_while(|&e| e < 4 as usize).for_each(|e| {  
        let e = e as u32;  
        let f = 4 / e;  
        let mut base = d(e);  
        let mut exp = 2 * f;  
        exp >>= 1;  
        let mut acc = base;  
        exp >>= 1;  
        {  
            let mut self = base;  
            self *= base;  
            self  
        }  
        if exp == 1 {  
            acc *= base;  
        }  
        acc  
        d(e).pow(acc) *= d(1) + d(1);  
        c *= d(e).pow(acc) + d(1);  
    });  
    c  
}  
  
#[derive(Clone, Copy)]  
struct d(u32);  
  
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
                in(reg) G,  
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