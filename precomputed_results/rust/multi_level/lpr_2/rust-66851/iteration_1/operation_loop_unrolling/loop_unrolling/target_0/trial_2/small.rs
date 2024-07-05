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
        while u < y {
            let mut af = true;
            let mut ah = 0;
            for i in (0..(1 << ab)).step_by(4) {
                let s0 = ad[i] + u;
                let s1 = ad[i + 1] + u;
                let s2 = ad[i + 2] + u;
                let s3 = ad[i + 3] + u;
                if ac[s0 as usize] || ac[s1 as usize] || ac[s2 as usize] || ac[s3 as usize] {
                    af = false;
                    break;
                }
                ad[(1 << ab) + i] = s0;
                ad[(1 << ab) + i + 1] = s1;
                ad[(1 << ab) + i + 2] = s2;
                ad[(1 << ab) + i + 3] = s3;
                ah += 1;
            }
            if af {
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
    let mut o: [[i32; 2]; 16] = Default::default();
    o[1][0] = std::i32::MAX;
    let result = match n(7, &o, F, F, 0, &mut ac, &mut ad) {
        J::K(s) => Some(s),
        _ => None,
    };
    assert_eq!(result, Some(20_313_839_404_245));
}