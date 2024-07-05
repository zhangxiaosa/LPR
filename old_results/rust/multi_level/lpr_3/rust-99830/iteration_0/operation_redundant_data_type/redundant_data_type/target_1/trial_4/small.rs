use std::ops::{Add, MulAssign};
              fn main() {
                assert_eq!(a(4), 650);
              }
              fn a(b: u32) -> u32 {
                let mut c = 1u32;

                Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
                  let e = e as u32;
                  let f = b / e;
                  c *= e.pow(2 * f) + 1u32;
                });
                c
              }
              #[derive(Clone, Copy)]
              struct d(u32);
              impl Add<u32> for d {
                type Output = d;
                fn add(mut self, h: u32) -> d {
                  self.0 += h;
                  self
                }
              }
              impl MulAssign<u32> for d {
                fn mul_assign(&mut self, h: u32) {
                  unsafe {
                    core::arch::asm!(
                      "mul edx",
                      "div {:e}",
                      in(reg) Self::g,
                      inout("eax") h => _,
                      inout("edx") self.0
                    );
                  }
                }
              }
              impl d {
                fn pow(self, mut exp: u32) -> Self {
                  let mut base = self;
                  base = base.saturating_mul(base);
                  exp >>= 1;
                  let mut acc = base;
                  exp >>= 1;
                  base = base.saturating_mul(base);
                  if exp == 1 {
                    acc = acc.saturating_mul(base);
                  }
                  acc
                }
              }