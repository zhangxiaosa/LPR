fn main() {
    const F: i32 = 1 << 12;
    enum J {
        K(u64),
        L(i32),
        M,
    }
    fn n(aa: i32, o: &[[i32; 2]], p: i32, q: i32, ab: i32, ac: &mut [bool], ad: &mut [i32]) -> J {
        if ab == aa {
            const AE_1: &str = &ad[1].to_string();
            const AE_2: &str = &ad[2].to_string();
            const AE_3: &str = &ad[4].to_string();
            const AE_4: &str = &ad[8].to_string();
            const AE_5: &str = &ad[16].to_string();
            const AE_6: &str = &ad[32].to_string();
            const AE_7: &str = &ad[64].to_string();
            return match (AE_1.to_string() + AE_2 + AE_3 + AE_4 + AE_5 + AE_6 + AE_7).parse() {
                Ok(r) => J::K(r),
                Err(_) => J::M,
            };
        }
        let mut t = 0;
        let y = q;
        for i in 1..=ab {
            t = t.max(o[i as usize][1] - o[i as usize][0]);
        }
        let mut u = t;
        while u < y {
            let mut af = true;
            let ag = 1 << ab;
            let mut ah = 0;
            for i in 0..ag {
                let s = ad[i] + u;
                if ac[s as usize] {
                    af = false;
                    break;
                }
                ad[ag + i] = s;
                ac[s as usize] = true;
                ah += 1;
            }
            if af {
                let mut z: [[i32; 2]; 16] = Default::default();
                z[ab as usize + 2][0] = std::i32::MAX;
                for i in 1..=(ab + 1) {
                    z[i as usize][0] = o[i as usize][0].min(u + o[(i - 1) as usize][0]);
                    z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
                }
                let af = n(aa, &z, p, u, ab + 1, ac, ad);
                match af {
                    J::K(_) | J::M => return af,
                    J::L(v) => {}
                }
            }
            for i in 0..ah {
                ac[ad[ag + i] as usize] = false;
            }
            u += 1;
        }
        J::L(p)
    }
    let mut ac = vec![false; 4096];
    let mut ad = vec![0i32; 128];
    let mut o: [[i32; 2]; 16] = Default::default();
    o[1][0] = std::i32::MAX;
    let result = match n(7, &o, F, F, 0, &mut ac, &mut ad) {
        J::K(s) => Some(s),
        _ => None,
    };
    assert_eq!(result, Some(20_313_839_404_245));
}
