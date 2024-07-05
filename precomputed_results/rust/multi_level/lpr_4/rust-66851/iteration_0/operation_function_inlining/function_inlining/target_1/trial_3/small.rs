use std::convert::TryFrom;

fn main() {
    const E: i32 = 7;
    const F: i32 = 1 << 12;
    const W: usize = F as usize;
    type X = [[i32; 2]; 18];
    enum J {
        K(u64),
        L(i32),
        M,
    }

    let mut ac = [false; W];
    let mut ad = [0i32; 1 << E];
    let mut o: X = Default::default();
    o[1][0] = std::i32::MAX;

    let mut result = None;

    if E == E {
        let mut ae = String::new();
        for i in (0..E).rev() {
            ae += &ad[1 << i].to_string();
        }
        if let Ok(r) = ae.parse() {
            result = Some(J::K(r));
        } else {
            result = Some(J::M);
        }
    }

    let mut t = 0;
    let y = F;
    for i in 0..E {
        t = t.max(o[usize::try_from(i).unwrap() + 1][1] - o[usize::try_from(i).unwrap() + 1][0]);
    }
    let mut u = t;
    while u < y {
        let mut af = true;
        let ag = 1 << E;
        let mut ah = 0;
        for i in 0..ag {
            let mut s = ad[i] + u;
            if ac[usize::try_from(s).unwrap()] {
                af = false;
                break;
            }
            ad[ag + i] = s;
            ac[usize::try_from(s).unwrap()] = true;
            ah += 1;
        }
        if af {
            let mut z: X = Default::default();
            z[usize::try_from(E).unwrap() + 2][0] = std::i32::MAX;
            for i in 1..E + 2 {
                z[usize::try_from(i).unwrap()][0] = o[usize::try_from(i).unwrap()][0]
                    .min(u + o[usize::try_from(i).unwrap() - 1][0]);
                z[usize::try_from(i).unwrap()][1] = o[usize::try_from(i).unwrap()][1]
                    .max(u + o[usize::try_from(i).unwrap() - 1][1]);
            }
            let af = {
                let aa = E;
                let p = u;
                let ab = E + 1;
                let mut ad = &mut ad;
                let mut ac = &mut ac;
                let z = &z;

                if ab == aa {
                    let mut ae = String::new();
                    for i in (0..ab).rev() {
                        ae += &ad[1 << i].to_string();
                    }
                    if let Ok(r) = ae.parse() {
                        J::K(r)
                    } else {
                        J::M
                    }
                } else {
                    let mut t = 0;
                    let y = p;
                    for i in 0..ab {
                        t = t
                            .max(z[usize::try_from(i).unwrap() + 1][1] - z[usize::try_from(i).unwrap() + 1][0]);
                    }
                    let mut u = t;
                    while u < y {
                        let mut af = true;
                        let ag = 1 << ab;
                        let mut ah = 0;
                        for i in 0..ag {
                            let s = ad[i] + u;
                            if ac[usize::try_from(s).unwrap()] {
                                af = false;
                                break;
                            }
                            ad[ag + i] = s;
                            ac[usize::try_from(s).unwrap()] = true;
                            ah += 1;
                        }
                        if af {
                            let mut z: X = Default::default();
                            z[usize::try_from(ab).unwrap() + 2][0] = std::i32::MAX;
                            for i in 1..ab + 2 {
                                z[usize::try_from(i).unwrap()][0] = o[usize::try_from(i).unwrap()][0]
                                    .min(u + o[usize::try_from(i).unwrap() - 1][0]);
                                z[usize::try_from(i).unwrap()][1] = o[usize::try_from(i).unwrap()][1]
                                    .max(u + o[usize::try_from(i).unwrap() - 1][1]);
                            }
                            let af = {
                                let aa = aa;
                                let p = u;
                                let ab = ab + 1;
                                let mut ad = ad;
                                let mut ac = ac;
                                let z = &z;

                                let af = n(aa, z, p, u, ab, ac, ad);
                                match af {
                                    J::K(_) | J::M => af,
                                    J::L(v) => J::L(v),
                                }
                            };
                            match af {
                                J::K(_) | J::M => {
                                    result = Some(af);
                                    break;
                                }
                                J::L(v) => {}
                            }
                        }
                        for i in 0..ah {
                            ac[usize::try_from(ad[ag + i]).unwrap()] = false;
                        }
                        u += 1;
                    }
                    J::L(p)
                }
            };
            match af {
                J::K(_) | J::M => {
                    result = Some(af);
                    break;
                }
                J::L(v) => {}
            }
        }
        for i in 0..ah {
            ac[usize::try_from(ad[ag + i]).unwrap()] = false;
        }
        u += 1;
    }

    match result {
        Some(s) => println!("{:?}", s),
        _ => println!("None"),
    }
}