fn main() {
    let b = 4;
    let mut c = d(1);
    
    (0..(Primes.iter().position(|&e| e >= b as usize).unwrap())).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        let base = {
            let mut base = d(e);
            base *= base;
            if f != 0 {
                for _ in 1..f {
                    let tmp = base * base;
                    base = tmp;
                }
            }
            base
        };
        
        c *= base + d(1);
    });
    
    assert_eq!(c.0, 650);
}

struct d(u32);
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

impl core::ops::MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        let tmp = (u64::from(self.0) * u64::from(h.0)) / u64::from(d::G);
        self.0 = tmp as u32;
    }
}