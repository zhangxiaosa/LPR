enum j {
    k(u64),
    l(i32),
    m,
}

fn d() -> u64 {
    let mut ac = [false; 8192];
    let mut ad = [0i32; 128];
    let o = Default::default();
    let aa = 7;
    let p = 4096;
    let q = 4096;
    let ab = 0;

    if ab == aa {
        let mut ae = String::new();
        let mut ad_eval = ad;

        for i in (0..ab).rev() {
            ae += &ad_eval[1 << i].to_string();
        }

        return if let Ok(r) = ae.parse() {
            r
        } else {
            0
        };
    }

    let mut t = 0;
    for i in 0..ab {
        let index = i as usize;
        t = t.max(o[index + 1][1] - o[index + 1][0]);
    }
    let mut u = t;
    while u < q {
        let mut af = true;
        let ag = 1 << ab;
        let mut t = 0;
        for i in 0..ag {
            let s = ad[i] + u;
            if ac[s as usize] {
                af = false;
                break;
            }
            ad[ag + i] = s;
            ac[s as usize] = true;
            t += 1;
        }
        if af {
            let mut z: [[i32; 2]; 16] = Default::default();
            for i in 1..ab + 2 {
                z[i as usize][0] = 2147483647.min(u + o[(i - 1) as usize][0]);
                z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
            }
            let af = {
                let aa = aa;
                let z = &z;
                let p = p;
                let u = u;
                let ab = ab + 1;
                let ac = &mut ac;
                let ad = &mut ad;
                if ab == aa {
                    let mut ae = String::new();
                    let mut ad_eval = ad;

                    for i in (0..ab).rev() {
                        ae += &ad_eval[1 << i].to_string();
                    }

                    if let Ok(r) = ae.parse() {
                        j::k(r)
                    } else {
                        j::m
                    }
                } else {
                    let mut t = 0;
                    for i in 0..ab {
                        let index = i as usize;
                        t = t.max(z[index + 1][1] - z[index + 1][0]);
                    }
                    let mut u = u;
                    while u < q {
                        let mut af = true;
                        let ag = 1 << ab;
                        let mut t = 0;
                        for i in 0..ag {
                            let s = ad[i] + u;
                            if ac[s as usize] {
                                af = false;
                                break;
                            }
                            ad[ag + i] = s;
                            ac[s as usize] = true;
                            t += 1;
                        }
                        if af {
                            let mut z: [[i32; 2]; 16] = Default::default();
                            for i in 1..ab + 2 {
                                z[i as usize][0] = 2147483647.min(u + z[(i - 1) as usize][0]);
                                z[i as usize][1] = z[i as usize][1].max(u + z[(i - 1) as usize][1]);
                            }
                            let af = n(aa, &z, p, u, ab + 1, ac, ad);
                            match af {
                                j::k(_) | j::m => return af,
                                _ => {}
                            }
                        }
                        for i in 0..t {
                            ac[ad[ag + i] as usize] = false;
                        }
                        u += 1;
                    }
                    j::l(p)
                }
            };

            match af {
                j::k(s) => s,
                _ => 0,
            }
        }
        for i in 0..t {
            ac[ad[ag + i] as usize] = false;
        }
        u += 1;
    }
    j::l(p)
}

assert_eq!(d(), 20_313_839_404_245);