fn d() -> u64 {
    enum j {
        k(u64),
        l(i32),
        m,
    }
    let mut ac = [false; 8192];
    let mut ad = [0i32; 128];
    let o = Default::default();
    let aa = 7;
    let o = &o;
    let p = 4096;
    let q = 4096;
    let ab = 0;
    let mut u = o[3][1] - o[3][0];
    let mut ae = String::new();
    for i in (0..ab).rev() {
        ae += &ad[1 << i].to_string();
    }
    if let Ok(r) = ae.parse() {
        j::k(r)
    } else {
        j::m
    }
    while u < q {
        let mut af = true;
        let mut t = 0;
        for i in 0..(1 << ab) {
            let ad_i_u = ad[i] + u;
            if ac[ad_i_u as usize] {
                af = false;
                break;
            }
            ad[(1 << ab) + i] = ad_i_u;
            ac[ad_i_u as usize] = true;
            t += 1;
        }
        if af {
            let mut z: [[i32; 2]; 16] = Default::default();
            for i in 1..(ab + 2) {
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
                let mut u = u;
                let mut ae = String::new();
                for i in (0..ab).rev() {
                    ae += &ad[1 << i].to_string();
                }
                if let Ok(r) = ae.parse() {
                    j::k(r)
                } else {
                    j::m
                }
                while u < q {
                    let mut af = true;
                    let mut t = 0;
                    for i in 0..(1 << ab) {
                        let ad_i_u = ad[i] + u;
                        if ac[ad_i_u as usize] {
                            af = false;
                            break;
                        }
                        ad[(1 << ab) + i] = ad_i_u;
                        ac[ad_i_u as usize] = true;
                        t += 1;
                    }
                    if af {
                        let mut z: [[i32; 2]; 16] = Default::default();
                        for i in 1..(ab + 2) {
                            z[i as usize][0] = 2147483647.min(u + o[(i - 1) as usize][0]);
                            z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
                        }
                        let af = n(aa, &z, p, u, ab, ac, ad);
                        match af {
                            j::k(_) | j::m => return af,
                            j::l(_) => {}
                        }
                    }
                    for i in 0..t {
                        ac[ad[(1 << ab) + i] as usize] = false;
                    }
                    u += 1;
                }
                j::l(p)
            };
            match af {
                j::k(_) | j::m => return af,
                j::l(_) => {}
            }
        }
        for i in 0..t {
            ac[ad[(1 << ab) + i] as usize] = false;
        }
        u += 1;
    }
    j::l(p)
}
fn main() {
    assert_eq!(d(), 20_313_839_404_245);
}