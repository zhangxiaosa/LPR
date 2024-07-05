use primal_sieve::Primes;
              use std::ops::{Add, MulAssign};

  fn main() {
      let mut c: u32 = 1;
      Primes::all().take_while(|&e| e < 4usize).for_each(|e| {
          let e: u32 = e as u32;
          let mut other: u32 = e.pow(2 * (4 / e)) + 1;
          unsafe {
              core::arch::asm!(
                  "mul edx",
                  "div {:e}",
                  in(reg) d::g,
                  inout("eax") other,
                  inout("edx") c
              );
          }
      });
      assert_eq!(c, 650);
  }

  #[derive(Clone, Copy)]
  struct d(u32);

  impl d {
      const g: u32 = 1000000000;

      fn pow(self, mut exp: u32) -> u32 {
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
      type Output = u32;

      fn add(mut self, other: d) -> u32 {
          self.0 += other.0;
          self.0
      }
  }

  impl MulAssign for d {
      fn mul_assign(&mut self, other: d) {
          unsafe {
              core::arch::asm!(
                  "mul edx",
                  "div {:e}",
                  in(reg) Self::g,
                  inout("eax") other.0 => _,
                  inout("edx") self.0
              );
          }
      }
  }