use primal_sieve::Primes;

fn main() {
    let b = 4;
    let mut c = d { 0: 1 };
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        let base = d { 0: e }.pow(2 * f);
        c *= base.add(d { 0: 1 });
    });
    assert_eq!(c.0, 650);
}

fn d(exp: u32) -> u32 {
    let mut base = exp;
    base *= base;
    let mut acc = base;
    base *= base;
    if exp == 1 {
        acc *= base;
    }
    acc
}

impl core::ops::Add for u32 {
    type Output = u32;
  
    fn add(self, h: u32) -> u32 {
        self + h
    }
}

impl core::ops::MulAssign for u32 {
    fn mul_assign(&mut self, h: u32) {
        unsafe {
            core::arch::asm!(
                "mul edx",
                "div {}",
                in(reg) d::G,
                inout("eax") h => _,
                inout("edx") *self
            );
        }
    }
}
