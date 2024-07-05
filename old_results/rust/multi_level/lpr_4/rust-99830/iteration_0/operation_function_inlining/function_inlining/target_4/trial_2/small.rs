fn main() {
    #[derive(Clone, Copy)]
    struct d(u32);

    impl d {
        const g: u32 = 10u32.pow(9);

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

    impl d {
        fn inline_method_mul_assign(&mut self, h: d) {
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

    impl Add for d {
        type Output = d;
        fn add(mut self, h: d) -> d {
            self.0 += h.0;
            self
        }
    }

    fn pow(n: d, exp: u32) -> d {
        let mut base = n;
        base *= base;
        let mut acc = base;
        let exp = exp >> 1;
        base *= base;
        if exp == 1 {
            acc *= base;
        }
        acc
    }

    let mut c = d { 0: 1 };
    Primes::all().take_while(|&e| e < 4 as usize).for_each(|e| {
        let e = e as u32;
        let f = 4 / e;
        c.inline_method_mul_assign(d{0: e}.pow(2 * f) + d { 0: 1 });
    });
    assert_eq!(c.0, 650u32);
}