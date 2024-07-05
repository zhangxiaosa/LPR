use std::ops::{Add, MulAssign};

fn main() {
    let result = d(1).pow(2) + d(1).pow(2) + d(1).pow(2) + d(1).pow(2);
    assert_eq!(result.0, 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1).pow(2);
    {
        let mut primes = Primes::all();
        let mut done = false;
        while !done {
            let e = match primes.next() {
                Some(num) => {
                    if num < b as usize {
                        Some(num as u32)
                    } else {
                        done = true;
                        None
                    }
                }
                None => {
                    done = true;
                    None
                }
            };
            if let Some(e) = e {
                let f = b / e;
                c *= d(e).pow(2 * f) + d(1);
            }
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