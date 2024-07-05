fn main() {
    const f: i32 = 1 << 12;
    let mut ac = [false; f as usize];
    let mut ad = [0i32; 1 << 7];
    let mut o = [[0i32; 2]; 16];
    o[1][0] = std::i32::MAX;
    {
        let aa = 7;
        let ab = 0;
        let mut ae = String::new();
        for i in (0..ab).rev() {
            ae += &ad[1 << i].to_string();
        }
        let mut t = 0;
        t = t.max(o[2 + 1][1] - o[2 + 1][0]);
        let mut u = t;
        while u < f {
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
                let mut z = [[0i32; 2]; 16];
                z[ab as usize + 2][0] = std::i32::MAX;
                for i in 1..ab + 2 {
                    z[i as usize][0] = o[i as usize][0].min(u + o[i as usize - 1][0]);
                    z[i as usize][1] = o[i as usize][1].max(u + o[i as usize - 1][1]);
                }
                let af = {
                    let aa = aa;
                    let o = &z;
                    let p = f;
                    let q = u;
                    let ac = &mut ac;
                    let ad = &mut ad;
                    if ab == aa {
                        if let Ok(r) = ae.parse() {
                            j::k(r)
                        } else {
                            j::m
                        }
                    } else {
                        let mut t = 0;
                        t = t.max(o[2 + 1][1] - o[2 + 1][0]);
                        let mut u = t;
                        while u < q {
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
                                let mut z = [[0i32; 2]; 16];
                                z[ab as usize + 2][0] = std::i32::MAX;
                                for i in 1..ab + 2 {
                                    z[i as usize][0] = o[i as usize][0].min(u + o[i as usize - 1][0]);
                                    z[i as usize][1] = o[i as usize][1].max(u + o[i as usize - 1][1]);
                                }
                                let af = {
                                    let aa = aa;
                                    let o = &z;
                                    let p = p;
                                    let q = u;
                                    let ac = &mut ac;
                                    let ad = &mut ad;
                                    n(aa, o, p, q, ab + 1, ac, ad)
                                };
                                match af {
                                    j::k(_) | j::m => return af,
                                    j::l(_) => {}
                                }
                            }
                            for i in 0..ah {
                                ac[ad[ag + i] as usize] = false;
                            }
                            u += 1;
                        }
                        j::l(p)
                    }
                };
                match af {
                    j::k(_) | j::m => return af,
                    j::l(_) => {}
                }
            }
            for i in 0..ah {
                ac[ad[ag + i] as usize] = false;
            }
            u += 1;
        }
        j::l(f)
    }
}

enum j {
    k(u64),
    l(i32),
    m,
}