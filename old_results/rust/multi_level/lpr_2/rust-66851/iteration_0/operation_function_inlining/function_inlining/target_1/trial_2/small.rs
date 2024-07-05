fn main() {
    assert_eq!(
        {
            const e: i32 = 7;
            const w: usize = 1 << 12;
            let mut ac = [false; w];
            let mut ad = [0i32; 1 << e];
            let mut o = [[0i32; 2]; 16];
            o[1][0] = std::i32::MAX;
            let mut t = 0;
            let y = f;
            for i in 0..e {
                t = t.max(o[i as usize + 1][1] - o[i as usize + 1][0]);
            }
            let mut u = t;
            while u < y {
                let mut af = true;
                let ag = 1 << e;
                for i in 0..ag {
                    let s = ad[i] + u;
                    if ac[s as usize] {
                        af = false;
                        break;
                    }
                    ad[ag + i] = s;
                    ac[s as usize] = true;
                }
                if af {
                    let mut z = [[0i32; 2]; 16];
                    z[e as usize + 2][0] = std::i32::MAX;
                    for i in 1..e as usize + 2 {
                        z[i][0] = o[i][0].min(u + o[i - 1][0]);
                        z[i][1] = o[i][1].max(u + o[i - 1][1]);
                    }
                    let mut ac_inner = ac;
                    let mut ad_inner = ad;
                    let af = {
                        if e == e {
                            let aa_inner = e;
                            let o_inner = &z;
                            let p_inner = f;
                            let q_inner = u;
                            let ab_inner = e + 1;
                            let ac_inner = &mut ac_inner;
                            let ad_inner = &mut ad_inner;
                            let mut ae = String::new();
                            for i in (0..ab_inner).rev() {
                                ae += &ad_inner[1 << i].to_string();
                            }
                            if let Ok(r) = ae.parse() {
                                k(r)
                            } else {
                                m
                            }
                        } else {
                            p
                        }
                    };
                    match af {
                        k(_) | m => return af,
                        l(v) => {}
                    }
                }
                for i in 0..ag {
                    ac[ad[ag + i] as usize] = false;
                }
                u += 1;
            }
            l(p)
        },
        Some(20_313_839_404_245)
    );
}

fn k(r: u64) -> j {
    j::k(r)
}

fn m() -> j {
    j::m
}

fn l(v: i32) -> j {
    j::l(v)
}

enum j {
    k(u64),
    l(i32),
    m,
}
