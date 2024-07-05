use std::convert::TryFrom;

fn d() -> Option<u64> {
    const e: i32 = 7;
    const f: i32 = 1 << 12;
    const w: usize = f as usize;
    type g = [i32];
    type h = [bool];
    type x = [[i32; 2]; 16];
    enum j {
        k(u64),
        l(i32),
        m,
    }

    let mut ac = [false; w];
    let mut ad = [0i32; 1 << e];
    let mut o: x = Default::default();
    o[1][0] = std::i32::MAX;

    if e == e {
        let mut ae = String::new();
        for i in (0..e).rev() {
            ae += &ad[1 << i].to_string();
        }
        return if let Ok(r) = ae.parse() {
            Some(r)
        } else {
            None
        };
    }
    let mut t = 0;
    let y = f as i32;
    for i in 0..e {
        t = t
            .max(o[usize::try_from(i).unwrap() + 1][1] - o[usize::try_from(i).unwrap() + 1][0]);
    }
    let mut u = t;
    while u < y {
        let mut af = true;
        let ag = 1 << e;
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
            let mut z: x = Default::default();
            z[usize::try_from(e).unwrap() + 2][0] = std::i32::MAX;
            for i in 1..e + 2 {
                z[usize::try_from(i).unwrap()][0] = o[usize::try_from(i).unwrap()][0]
                    .min(u + o[usize::try_from(i).unwrap() - 1][0]);
                z[usize::try_from(i).unwrap()][1] = o[usize::try_from(i).unwrap()][1]
                    .max(u + o[usize::try_from(i).unwrap() - 1][1]);
            }
            let af = {
                let mut aa = e;
                let o = &z;
                let mut p = f as i32;
                let q = u;
                let mut ab = e + 1;
                let ac = &mut ac;
                let ad = &mut ad;

                if ab == aa {
                    let mut ae = String::new();
                    for i in (0..ab).rev() {
                        ae += &ad[1 << i].to_string();
                    }
                    if let Ok(r) = ae.parse() {
                        j::k(r)
                    } else {
                        j::m
                    }
                } else {
                    let mut t = 0;
                    let y = q;
                    for i in 0..ab {
                        t = t
                            .max(o[usize::try_from(i).unwrap() + 1][1] - o[usize::try_from(i).unwrap() + 1][0]);
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
                            let mut z: x = Default::default();
                            z[usize::try_from(ab).unwrap() + 2][0] = std::i32::MAX;
                            for i in 1..ab + 2 {
                                z[usize::try_from(i).unwrap()][0] = o[usize::try_from(i).unwrap()][0]
                                    .min(u + o[usize::try_from(i).unwrap() - 1][0]);
                                z[usize::try_from(i).unwrap()][1] = o[usize::try_from(i).unwrap()][1]
                                    .max(u + o[usize::try_from(i).unwrap() - 1][1]);
                            }
                            let af = n(aa, &z, p, u, ab + 1, ac, ad);
                            match af {
                                j::k(_) | j::m => return af,
                                j::l(v) => {}
                            }
                        }
                        for i in 0..ah {
                            ac[usize::try_from(ad[ag + i]).unwrap()] = false;
                        }
                        u += 1;
                    }
                    j::l(p)
                }
            };
            match af {
                j::k(_) | j::m => return Some(0),
                j::l(v) => {}
            }
        }
        for i in 0..ah {
            ac[usize::try_from(ad[ag + i]).unwrap()] = false;
        }
        u += 1;
    }
    None
}

fn main() {
    assert_eq!(d(), Some(20_313_839_404_245));
}