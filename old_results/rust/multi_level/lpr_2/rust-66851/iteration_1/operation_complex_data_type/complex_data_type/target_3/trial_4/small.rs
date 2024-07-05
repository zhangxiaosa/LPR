fn main() {
    const F: i32 = 1 << 12;

    // Decomposed enum J
    #[derive(Debug)]
    enum J {
        K(u64),
        L(i32),
        M,
    }

    // Decomposed array o
    let mut o_0: [i32; 16] = [0; 16];
    let mut o_1: [i32; 16] = [0; 16];
    o_0[1] = std::i32::MAX;

    fn n(
        aa: i32,
        o_0: &[i32],
        o_1: &[i32],
        p: i32,
        q: i32,
        ab: i32,
        ac: &mut [bool],
        ad: &mut [i32],
    ) -> J {
        if ab == aa {
            let r = format!(
                "{}{}{}{}{}{}{}",
                ad[(1 << ab - 1) as usize],
                ad[(1 << ab - 2) as usize],
                ad[(1 << ab - 3) as usize],
                ad[(1 << ab - 4) as usize],
                ad[(1 << ab - 5) as usize],
                ad[(1 << ab - 6) as usize],
                ad[(1 << ab - 7) as usize]
            );
            return if let Ok(r) = r.parse() {
                J::K(r)
            } else {
                J::M
            };
        }
        let mut u = 0;
        let y = q;
        for i in 1..=ab {
            u = u.max(o_1[i as usize] - o_0[i as usize]);
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
                let ab_2 = ab + 2;
                let mut z_0: [i32; 16] = [0; 16];
                let mut z_1: [i32; 16] = [0; 16];
                z_0[ab_2 as usize] = std::i32::MAX;
                for i in 1..=(ab + 1) {
                    z_0[i as usize] = o_0[i as usize].min(u + o_0[(i - 1) as usize]);
                    z_1[i as usize] = o_1[i as usize].max(u + o_1[(i - 1) as usize]);
                }
                let af = n(aa, &z_0, &z_1, p, u, ab + 1, ac, ad);
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
    let result = match n(7, &o_0, &o_1, F, F, 0, &mut ac, &mut ad) {
        J::K(s) => Some(s),
        _ => None,
    };
    assert_eq!(result, Some(20_313_839_404_245));
}