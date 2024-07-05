use primal_sieve::Primes;
use std::ops::MulAssign;

fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c = d(1);
    Primes::all().take_while(|&e| e < b as usize).for_each(|e| {
        let e = e as u32;
        let f = b / e;
        c *= (d(e).0 + d(1).0) * (2 * f);
    });
    c.0
}

#[derive(Clone, Copy)]
struct d(u32);
impl d {
    const g: u32 = 10u32.pow(9);
}
impl MulAssign for d {
    fn mul_assign(&mut self, h: d) {
        self.0 = ((self.0 as u64) * (h.0 as u64) % d::g) as u32;
    }
}