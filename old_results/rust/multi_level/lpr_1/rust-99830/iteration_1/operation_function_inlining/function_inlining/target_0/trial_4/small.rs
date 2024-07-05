use primal_sieve::Primes;
   
   fn main() {
       assert_eq!(a(4), 650);
   }
   
   fn a(b: u32) -> u32 {
       let mut c = d(1);
       Primes::all()
           .take_while(|&e| e < b as usize)
           .for_each(|e| {
               let exp = 2 * (b / e as u32);
               let mut base = d(e as u32);
               let mut acc = base;
               let mut exp = exp >> 1;
               while exp > 0 {
                   base *= base;
                   exp >>= 1;
                   if exp & 1 == 1 {
                       acc *= base;
                   }
               }
               c *= acc + d(1);
           });
       c.0
   }
   
   #[derive(Clone, Copy)]
   struct d(u32);
   
   impl d {
       const g: u32 = 1000000000;
       
       fn pow(self, mut exp: u32) -> Self {
           let mut base = self;
           let mut acc = base;
           let mut exp = exp >> 1;
           while exp > 0 {
               base *= base;
               exp >>= 1;
               if exp & 1 == 1 {
                   acc *= base;
               }
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
           let g = d::g;
           let (mut tmp_lo, mut tmp_hi): (u32, u32);
           unsafe {
               llvm_asm!("mov ecx, edx" : "={edx}"(tmp_hi), "={ecx}"(tmp_lo) : "{eax}"(h.0), "{edx}"(self.0) : "flags" : "volatile");
               llvm_asm!("mul ecx" : "={eax}"(self.0), "={edx}"(tmp_lo), "={ecx}"(tmp_hi) : "{eax}"(tmp_lo), "{edx}"(tmp_hi), "{ecx}"(g) : "flags" : "volatile");
           }
       }
   }