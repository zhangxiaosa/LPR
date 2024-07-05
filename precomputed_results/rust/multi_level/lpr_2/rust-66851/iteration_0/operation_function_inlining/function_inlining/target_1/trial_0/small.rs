use std::convert::TryFrom;

fn main() {
    assert_eq!(
        {
            const e: i32 = 7;
            const f: i32 = 1 << 12;
            const w: usize = f as _;
            type g = [i32];
            type h = [bool];
            type x = [[i32; 2]; 16];
            type z = [[i32; 2]; 16];
            type j = [u64];
            fn n(aa: i32, o: &x, p: i32, q: i32, ab: i32, ac: &mut h, ad: &mut g) -> j {
                if ab == aa {
                    let mut ae = String::new();
                    for i in (0..ab).rev() {
                        ae += &ad[1 << i].to_string();
                    }
                    return if let Ok(r) = ae.parse() {
                        [r as u64]
                    } else {
                        []
                    };
                }
                let mut t = 0;
                let y = q;
                for i in 0..ab {
                    t = t.max(o[ab + 1][1] - o[ab + 1][0]);
                }
                let mut u = t;
                while u < y {
                    let mut af = true;
                    let ag = 1 << ab;
                    let mut ah = 0;
                    for i in 0..ag {
                        let s = ad[i] + u;
                        if ac[s] {
                            af = false;
                            break;
                        }
                        ad[ag + i] = s;
                        ac[s] = true;
                        ah += 1;
                    }
                    if af {
                        let mut z: z = Default::default();
                        z[ab + 2][0] = std::i32::MAX;
                        for i in 1..ab + 2 {
                            z[i][0] = o[i][0].min(u + o[i - 1][0]);
                            z[i][1] = o[i][1].max(u + o[i - 1][1]);
                        }
                        let af = n(aa, &z, p, u, ab + 1, ac, ad);
                        if !af.is_empty() {
                            return af;
                        }
                    }
                    for i in 0..ah {
                        ac[ad[ag + i]] = false;
                    }
                    u += 1;
                }
                [p as u64]
            }
            let mut ac = [false; w];
            let mut ad = [0i32; 1 << e];
            let mut o: x = Default::default();
            o[1][0] = std::i32::MAX;
            let af = {
                let aa = e;
                let o = &o;
                let p = f;
                let q = f;
                let ab = 0;
                let ac = &mut ac;
                let ad = &mut ad;

                if ab == aa {
                    let mut ae = String::new();
                    for i in (0..ab).rev() {
                        ae += &ad[1 << i].to_string();
                    }
                    if let Ok(r) = ae.parse() {
                        [r as u64]
                    } else {
                        []
                    }
                } else {
                    let mut t = 0;
                    let y = q;
                    for i in 0..ab {
                        t = t.max(o[ab + 1][1] - o[ab + 1][0]);
                    }
                    let mut u = t;
                    while u < y {
                        let mut af = true;
                        let ag = 1 << ab;
                        let mut ah = 0;
                        for i in 0..ag {
                            let s = ad[i] + u;
                            if ac[s] {
                                af = false;
                                break;
                            }
                            ad[ag + i] = s;
                            ac[s] = true;
                            ah += 1;
                        }
                        if af {
                            let mut z: z = Default::default();
                            z[ab + 2][0] = std::i32::MAX;
                            for i in 1..ab + 2 {
                                z[i][0] = o[i][0].min(u + o[i - 1][0]);
                                z[i][1] = o[i][1].max(u + o[i - 1][1]);
                            }
                            let af = n(aa, &z, p, u, ab + 1, ac, ad);
                            if !af.is_empty() {
                                af
                            } else {
                                [f as u64]
                            }
                        } else {
                            for i in 0..ah {
                                ac[ad[ag + i]] = false;
                            }
                            u += 1;
                        }
                    }
                    [p as u64]
                }
            };

            match af {
                [s] => Some(s),
                _ => None,
            }
        },
        Some(20_313_839_404_245)
    );
}