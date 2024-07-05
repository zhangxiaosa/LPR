use std::convert::TryFrom;

macro_rules! a {
    ($b:expr, $c:ident) => {
        $c::try_from($b).unwrap()
    };
}

fn main() {
    const E: i32 = 7;
    const F: i32 = 1 << 12;
    const W: usize = F as usize;
    enum J {
        K(u64),
        L(i32),
        M,
    }

    fn n(
        aa: i32,
        o: &[[i32; 2]; 16],
        p: i32,
        q: i32,
        ab: i32,
        ac: &mut [bool],
        ad: &mut [i32],
    ) -> J {
        if ab == aa {
            let mut ae = String::new();
            ae += &ad[(1 << ab) - 1].to_string();
            ae += &ad[(1 << ab) - 2].to_string();
            ae += &ad[(1 << ab) - 3].to_string();
            ae += &ad[(1 << ab) - 4].to_string();
            ae += &ad[(1 << ab) - 5].to_string();
            ae += &ad[(1 << ab) - 6].to_string();
            ae += &ad[(1 << ab) - 7].to_string();
            return if let Ok(r) = ae.parse() {
                J::K(r)
            } else {
                J::M
            };
        }

        let mut t = 0;
        let y = q;
        for i in 1..=ab {
            t = t.max(o[a!(i, usize) + 1][1] - o[a!(i, usize) + 1][0]);
        }

        let mut u = t;
        while u < y {
            let mut af = true;
            let ag = 1 << ab;
            let mut ah = 0;

            for i in 0..ag {
                let s = ad[i] + u;
                if ac[a!(s, usize)] {
                    af = false;
                    break;
                }

                ad[ag + i] = s;
                ac[a!(s, usize)] = true;
                ah += 1;
            }

            if af {
                let mut z: [[i32; 2]; 16] = Default::default();
                z[a!(ab, usize) + 2][0] = std::i32::MAX;
                for i in 1..ab + 2 {
                    z[a!(i, usize)][0] = o[a!(i, usize)][0].min(u + o[a!(i, usize) - 1][0]);
                    z[a!(i, usize)][1] = o[a!(i, usize)][1].max(u + o[a!(i, usize) - 1][1]);
                }

                let af = n(aa, &z, p, u, ab + 1, ac, ad);
                match af {
                    J::K(_) | J::M => return af,
                    J::L(v) => {}
                }
            }

            for i in 0..ah {
                ac[a!(ad[ag + a!(i, usize)], usize)] = false;
            }

            u += 1;
        }

        J::L(p)
    }

    let mut ac = [false; W];
    let mut ad = [0i32; 1 << E];
    let mut o: [[i32; 2]; 16] = Default::default();
    o[1][0] = std::i32::MAX;

    match n(E, &o, F, F, 0, &mut ac, &mut ad) {
        J::K(s) => Some(s),
        _ => None,
    };
}