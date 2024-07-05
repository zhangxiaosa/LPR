fn main() {
    const E: i32 = 7;
    const F: i32 = 1 << 12;
    const W: usize = F as usize;

    type G = [i32];
    type H = [bool];
    type X = [[i32; 2]; 16];

    enum J {
        K(u64),
        L(i32),
        M,
    }

    fn main_inline() -> Option<u64> {
        let mut ac = [false; W];
        let mut ad = [0i32; 1 << E];
        let mut o: X = Default::default();
        o[1][0] = std::i32::MAX;

        let mut inline_n =
            |aa: i32, o: &X, p: i32, q: i32, ab: i32, ac: &mut H, ad: &mut G| -> J {
                if ab == aa {
                    let mut ae = String::new();
                    for i in (0..ab).rev() {
                        ae += &ad[1 << i].to_string();
                    }
                    if let Ok(r) = ae.parse() {
                        return J::K(r);
                    } else {
                        return J::M;
                    };
                }

                let mut t = 0;
                let y = q;

                for i in 0..ab {
                    t = t.max(o[(i as usize) + 1][1] - o[(i as usize) + 1][0]);
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
                        let mut z: X = Default::default();
                        z[(ab as usize) + 2][0] = std::i32::MAX;

                        for i in 1..=ab + 1 {
                            z[(i as usize)][0] = o[(i as usize)][0].min(u + o[(i as usize) - 1][0]);
                            z[(i as usize)][1] = o[(i as usize)][1].max(u + o[(i as usize) - 1][1]);
                        }

                        let af = inline_n(aa, &z, p, u, ab + 1, ac, ad);

                        match af {
                            J::K(_) | J::M => return af,
                            J::L(_) => {}
                        }
                    }

                    for i in 0..ah {
                        ac[ad[ag + (i as usize)] as usize] = false;
                    }

                    u += 1;
                }

                J::L(p)
            };

        match inline_n(E, &o, F, F, 0, &mut ac, &mut ad) {
            J::K(s) => Some(s),
            _ => None,
        }
    }

    assert_eq!(main_inline(), Some(20_313_839_404_245));
}
