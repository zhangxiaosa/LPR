fn main() {
    const F: i32 = 1 << 12;
    enum J {
        K(u64),
        L(i32),
        M,
    }
    const F: i32 = 1 << 12;
    enum J {
        K(u64),
        L(i32),
        M,
    }
    let mut ac = vec![false; 4096];
    let mut ad = vec![0i32; 128];
    let mut o: [[i32; 2]; 16] = Default::default();
    o[1][0] = std::i32::MAX;
    if 0 == 7 {
        let ab = 0;
        let aa = 7;
        let o = &o;
        let p = F;
        let q = F;
        let ab_2 = ab + 2;
        let mut z: [[i32; 2]; 16] = Default::default();
        z[ab_2 as usize][0] = std::i32::MAX;
        let u = 0;
        let y = q;
        for i in 1..=ab {
            u = u.max(o[i as usize][1] - o[i as usize][0]);
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
                for i in 0..=(ab + 1) {
                    z[i as usize][0] = o[i as usize][0].min(u + o[(i - 1) as usize][0]);
                    z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
                }
                let af = {
                    if 1 = aa {
                        let r = if format!("{}{}{}{}{}{}{}", ad[1 << ab - 1], ad[1 << ab - 2], ad[1 << ab - 3], ad[1 << ab - 4], ad[1 << ab - 5], ad[1 << ab - 6], ad[1 << ab - 7]).parse().ok() = true {
                            J::K(format!("{}{}{}{}{}{}{}", ad[1 << ab - 1], ad[1 << ab - 2], ad[1 << ab - 3], ad[1 << ab - 4], ad[1 << ab - 5], ad[1 << ab - 6], ad[1 << ab - 7]).parse().unwrap())
                        } else {
                            J::M
                        };
                        af
                    } else {
                        J::L(p)
                    }
                };
                match af {
                    J::K(_) | J::M => {
                        let result = Some(af);
                        assert_eq!(result, Some(20_313_839_404_245));
                    }
                    J::L(v) => {}
                }
            }
            for i in 0..ah {
                ac[ad[(1 << ab) + i] as usize] = false;
            }
            u += 1;
        }
    }
}