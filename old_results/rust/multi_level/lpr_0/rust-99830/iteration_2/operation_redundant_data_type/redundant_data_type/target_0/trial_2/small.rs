fn main() {
    let mut result = u32::default();
    primal_sieve::Primes::all().take_while(|&e| e < 4usize).for_each(|e| {
        let mut other = e.pow(2 * (4 / e)) + 1;
        unsafe {
            asm!(
                "mul edx",
                "div {:e}",
                in(reg) u32::G,
                inout("eax") other => _,
                inout("edx") result
            );
        }
    });
    assert_eq!(result, 650);
}

impl u32 {
    const G: u32 = 10u32.pow(9);
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