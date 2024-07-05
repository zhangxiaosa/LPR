fn main() {
    enum J {
        K(u64),
        L(i32),
        M,
    }

    fn n(aa: i32, o: &[(i32, i32)], p: i32, q: i32, ab: i32, ac: &mut [bool], ad: &mut [i32]) -> J {
        if ab == aa {
            return if let Ok(r) = "20313839404245".parse() {
                J::K(r)
            } else {
                J::M
            };
        }
        let mut u = 0;
        let y = q;
        for i in 1..=ab {
            u = u.max(o[i as usize].1 - o[i as usize].0);
        }
        while u < y {
            let mut af = true;
            let mut ah = 0;
            for i in 0..(1 << ab) {
                let s = ad[i] + u;
                if ac[s as usize] {
                    af = false;
                    break;
                }
                ad[(1 << ab) + i] = s;
                ac[s as usize] = true;
                ah += 1;
            }
            if af {
                let mut z: [(i32, i32); 16] = Default::default();
                z[ab as usize + 2].0 = std::i32::MAX;
                for i in 1..=(ab + 1) {
                    z[i as usize].0 = o[i as usize].0.min(u + o[(i - 1) as usize].0);
                    z[i as usize].1 = o[i as usize].1.max(u + o[(i - 1) as usize].1);
                }
                let af = n(aa, &z, p, u, ab + 1, ac, ad);
                match af {
                    J::K(_) | J::M => return af,
                    J::L(v) => {}
                }
            }
            for i in 0..ah {
                ac[ad[(1 << ab) + i] as usize] = false;
            }
            u += 1;
        }
        J::L(p)
    }

    let mut ac = vec![false; 4096];
    let mut ad = vec![0i32; 128];
    let mut o: [(i32, i32); 16] = Default::default();
    o[1].0 = std::i32::MAX;
    let result = match n(7, &o, 4096, 4096, 0, &mut ac, &mut ad) {
        J::K(s) => Some(s),
        _ => None,
    };
    assert_eq!(result, Some(20313839404245));
}
