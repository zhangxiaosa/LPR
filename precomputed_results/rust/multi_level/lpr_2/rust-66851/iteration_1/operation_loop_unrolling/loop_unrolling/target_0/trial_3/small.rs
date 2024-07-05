fn main() {
    const F: i32 = 1 << 12;
    enum J {
        K(u64),
        L(i32),
        M,
    }

    fn n(aa: i32, o: &[[i32; 2]], p: i32, q: i32, ab: i32, ac: &mut [bool], ad: &mut [i32]) -> J {
        if ab == aa {
            let r = format!(
                "{}{}{}{}{}{}{}",
                ad[1 << ab - 1],
                ad[1 << ab - 2],
                ad[1 << ab - 3],
                ad[1 << ab - 4],
                ad[1 << ab - 5],
                ad[1 << ab - 6],
                ad[1 << ab - 7]
            );
            return if let Ok(r) = r.parse() { J::K(r) } else { J::M };
        }
        let mut u = 0;
        let y = q;
        for i in 1..=ab {
            u = u.max(o[i as usize][1] - o[i as usize][0]);
        }
        let unrolled_limit = 1 << ab;
        let mut i = 0;
        while i + 7 < unrolled_limit {
            // Unrolled loop body: duplicate the loop body 8 times
            let s0 = ad[i] + u;
            let s1 = ad[i + 1] + u;
            let s2 = ad[i + 2] + u;
            let s3 = ad[i + 3] + u;
            let s4 = ad[i + 4] + u;
            let s5 = ad[i + 5] + u;
            let s6 = ad[i + 6] + u;
            let s7 = ad[i + 7] + u;

            let ac_s0 = ac[s0 as usize];
            let ac_s1 = ac[s1 as usize];
            let ac_s2 = ac[s2 as usize];
            let ac_s3 = ac[s3 as usize];
            let ac_s4 = ac[s4 as usize];
            let ac_s5 = ac[s5 as usize];
            let ac_s6 = ac[s6 as usize];
            let ac_s7 = ac[s7 as usize];

            let s0_idx = (1 << ab) + i;
            let s1_idx = (1 << ab) + i + 1;
            let s2_idx = (1 << ab) + i + 2;
            let s3_idx = (1 << ab) + i + 3;
            let s4_idx = (1 << ab) + i + 4;
            let s5_idx = (1 << ab) + i + 5;
            let s6_idx = (1 << ab) + i + 6;
            let s7_idx = (1 << ab) + i + 7;

            ad[s0_idx] = s0;
            ad[s1_idx] = s1;
            ad[s2_idx] = s2;
            ad[s3_idx] = s3;
            ad[s4_idx] = s4;
            ad[s5_idx] = s5;
            ad[s6_idx] = s6;
            ad[s7_idx] = s7;

            ac[s0 as usize] = true;
            ac[s1 as usize] = true;
            ac[s2 as usize] = true;
            ac[s3 as usize] = true;
            ac[s4 as usize] = true;
            ac[s5 as usize] = true;
            ac[s6 as usize] = true;
            ac[s7 as usize] = true;

            i += 8;
        }

        // Handle remaining iterations
        for i in i..unrolled_limit {
            let s = ad[i] + u;
            if ac[s as usize] {
                return J::M;
            }
            ad[(1 << ab) + i] = s;
            ac[s as usize] = true;
        }

        // Remaining code
        let ab_2 = ab + 2;
        let mut z: [[i32; 2]; 16] = Default::default();
        z[ab_2 as usize][0] = std::i32::MAX;
        for i in 1..=(ab + 1) {
            z[i as usize][0] = o[i as usize][0].min(u + o[(i - 1) as usize][0]);
            z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
        }

        let af = n(aa, &z, p, u, ab + 1, ac, ad);

        match af {
            J::K(_) | J::M => return af,
            J::L(v) => {}
        }

        for i in (1 << ab)..(1 << (ab + 1)) {
            ac[ad[i] as usize] = false;
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