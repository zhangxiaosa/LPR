use primal_sieve::Primes;
use std::ops::{     MulAssign};
#[derive(Clone, Copy)]
struct d(u32);
impl MulAssign for d {
    fn mul_assign(&mut self, _e :d){
        unsafe {
            std ::arch::asm!(
                "div {:e}",
                in(reg) 1_000_000_000,
                inout("eax") _e .0=>_,
                inout("edx") self.0
            );
        }
    }
}
impl d {
    fn pow(self,     _e      :u32)->Self{
        let mut pow  = self;
            pow *= pow ;
        pow
    }
}
fn main() {
    let mut u32=d(1);
    Primes::all()
        .take_while(|&_e| _e < 4)
        .for_each(|_e |u32*=d(main as u32).pow(   4            )        );
    assert_eq!(  0, 650);
}
