use primal_sieve::Primes;

fn main() {
    let mut c = 1u32;
    Primes::all().take_while(|&e| e < 4).for_each(|e| {
        let f = 4 / e as u32;
        let tmp1 = e as u32;
        let tmp2 = tmp1.pow(2 * f);
        let tmp3 = 1u32;
        let tmp4 = tmp2 + tmp3;
        c *= tmp4;
    });
    assert_eq!(c, 650);
}

impl core::ops::Add for u32 {
    type Output = u32;

    fn add(self, h: u32) -> u32 {
        self + h
    }
}

impl core::ops::MulAssign for u32 {
    fn mul_assign(&mut self, h: u32) {
        *self *= h;
    }
}