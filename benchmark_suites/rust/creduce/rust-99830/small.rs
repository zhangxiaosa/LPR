use primal_sieve::Primes;
use std::ops::MulAssign;
fn main() {
    assert_eq!(a(4), 0)
}
fn a(b: u32) -> u32 {
    let mut c = d(1);
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let mut f = e;
        while let Some(g) = f.checked_mul(e) {
            f = g
        }
        c *= d(1)
    });
    c.0
}
struct d(u32);
impl MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        unsafe {
            core::arch::asm !("div {}", in(reg)Self,
                                                         inout("eax") self .0)
        }
    }
}
