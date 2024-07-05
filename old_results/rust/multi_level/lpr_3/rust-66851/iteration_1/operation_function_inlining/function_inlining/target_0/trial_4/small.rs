fn main() {
    const E: i32 = 7;
    const F: i32 = 12;
    enum J {
        K(u64),
        L(i32),
        M,
    }

    fn d() -> Option<u64> {
        fn n(
            aa: i32,
            o: &[[i32; 2]],
            p: i32,
            q: i32,
            ab: i32,
            ac_decomposed: &[bool],
            ad: &[i32],
        ) -> J {
            if ab == aa {
                let mut ae = String::new();
                for i in 0..ab {
                    ae += &ad[1 << i].to_string();
                }
                return if let Ok(r) = ae.parse() {
                    J::K(r)
                } else {
                    J::M
                };
            }
            let u = 0;
            let af = n(aa, o, p, u, ab + 1, ac_decomposed, ad);
            match af {
                J::K(_) => return af,
                _ => {}
            }
            J::L(p)
        }

        match n(E, &Default::default(), F, F, 0, &[], &[0; 1 << E]) {
            J::K(_) => Some(203_138_394_042_45),
            _ => None,
        }
    }

    assert_eq!(d(), Some(203_138_394_042_45));
}