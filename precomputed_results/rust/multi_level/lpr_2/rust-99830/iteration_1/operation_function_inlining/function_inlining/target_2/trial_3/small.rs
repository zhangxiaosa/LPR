fn main() {
    let b = 4;
    let mut c = d(1);
    
    (2..).filter(|&x| primal_sieve::is_prime(x as u64))
        .take_while(|&e| e < b as usize)
        .for_each(|e| {
            let e = e as u32;
            let f = b / e;
            
            let mut base = d(e);
            base *= base;
            
            let mut exp = 2 * f;
            let mut acc = base;
            base *= base;
            
            if exp == 1 {
                acc *= base;
            }
            
            c *= acc + d(1);
        });
        
    assert_eq!(c.0, 650);
}

#[derive(Clone, Copy)]
struct d(u32);

impl d {
    const G: u32 = 10u32.pow(9);

    fn pow(mut self, mut exp: u32) -> d {
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

impl core::ops::Add</* d */> for d {
    type Output = d;
    
    fn add(mut self, h: d) -> d {
        self.0 += h.0;
        self
    }
}

impl core::ops::MulAssign</* d */> for d {
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