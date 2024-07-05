enum j {
    k(u64),
    l(i32),
    m,
}

fn d() -> u64 {
    let mut ac = [false; 8192];
    let mut ad = [0i32; 128];
    let o = Default::default();

    if 0 == 7 {
        let mut ae = String::new();
        for i in (0..0).rev() {
            ae += &ad[1 << i].to_string();
        }
        return if let Ok(r) = ae.parse() {
            j::k(r)
        } else {
            j::m
        };
    }

    let mut u = o[3][1] - o[3][0];
    while u < 4096 {
        let mut af = true;
        let mut t = 0;
        for i in 0..(1 << 0) {
            let ad_i_u = ad[i] + u;
            if ac[ad_i_u as usize] {
                af = false;
                break;
            }
            ad[(1 << 0) + i] = ad_i_u;
            ac[ad_i_u as usize] = true;
            t += 1;
        }
        if af {
            let mut z: [[i32; 2]; 16] = Default::default();
            for i in 1..0 + 2 {
                z[i as usize][0] = 2147483647.min(u + o[(i - 1) as usize][0]);
                z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
            }
            let af = {
                if 0 == 7 {
                    let mut ae = String::new();
                    for i in (0..0).rev() {
                        ae += &ad[1 << i].to_string();
                    }
                    return if let Ok(r) = ae.parse() {
                        j::k(r)
                    } else {
                        j::m
                    };
                }

                let mut u = o[3][1] - o[3][0];
                while u < u {
                    let mut af = true;
                    let mut t = 0;
                    for i in 0..(1 << 1) {
                        let ad_i_u = ad[i] + u;
                        if ac[ad_i_u as usize] {
                            af = false;
                            break;
                        }
                        ad[(1 << 1) + i] = ad_i_u;
                        ac[ad_i_u as usize] = true;
                        t += 1;
                    }
                    if af {
                        let mut z: [[i32; 2]; 16] = Default::default();
                        for i in 1..1 + 2 {
                            z[i as usize][0] = 2147483647.min(u + o[(i - 1) as usize][0]);
                            z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
                        }
                        let af = {
                            if 1 == 7 {
                                let mut ae = String::new();
                                for i in (0..1).rev() {
                                    ae += &ad[1 << i].to_string();
                                }
                                return if let Ok(r) = ae.parse() {
                                    j::k(r)
                                } else {
                                    j::m
                                };
                            }

                            let mut u = o[3][1] - o[3][0];
                            while u < u {
                                let mut af = true;
                                let mut t = 0;
                                for i in 0..(1 << 2) {
                                    let ad_i_u = ad[i] + u;
                                    if ac[ad_i_u as usize] {
                                        af = false;
                                        break;
                                    }
                                    ad[(1 << 2) + i] = ad_i_u;
                                    ac[ad_i_u as usize] = true;
                                    t += 1;
                                }
                                if af {
                                    let mut z: [[i32; 2]; 16] = Default::default();
                                    for i in 1..2 + 2 {
                                        z[i as usize][0] = 2147483647.min(u + o[(i - 1) as usize][0]);
                                        z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
                                    }
                                    let af = {
                                        if 2 == 7 {
                                            let mut ae = String::new();
                                            for i in (0..2).rev() {
                                                ae += &ad[1 << i].to_string();
                                            }
                                            return if let Ok(r) = ae.parse() {
                                                j::k(r)
                                            } else {
                                                j::m
                                            };
                                        }

                                        let mut u = o[3][1] - o[3][0];
                                        while u < u {
                                            let mut af = true;
                                            let mut t = 0;
                                            for i in 0..(1 << 3) {
                                                let ad_i_u = ad[i] + u;
                                                if ac[ad_i_u as usize] {
                                                    af = false;
                                                    break;
                                                }
                                                ad[(1 << 3) + i] = ad_i_u;
                                                ac[ad_i_u as usize] = true;
                                                t += 1;
                                            }
                                            if af {
                                                let mut z: [[i32; 2]; 16] = Default::default();
                                                for i in 1..3 + 2 {
                                                    z[i as usize][0] = 2147483647.min(u + o[(i - 1) as usize][0]);
                                                    z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
                                                }
                                                let af = {
                                                    if 3 == 7 {
                                                        let mut ae = String::new();
                                                        for i in (0..3).rev() {
                                                            ae += &ad[1 << i].to_string();
                                                        }
                                                        return if let Ok(r) = ae.parse() {
                                                            j::k(r)
                                                        } else {
                                                            j::m
                                                        };
                                                    }

                                                    let mut u = o[3][1] - o[3][0];
                                                    while u < u {
                                                        let mut af = true;
                                                        let mut t = 0;
                                                        for i in 0..(1 << 4) {
                                                            let ad_i_u = ad[i] + u;
                                                            if ac[ad_i_u as usize] {
                                                                af = false;
                                                                break;
                                                            }
                                                            ad[(1 << 4) + i] = ad_i_u;
                                                            ac[ad_i_u as usize] = true;
                                                            t += 1;
                                                        }
                                                        if af {
                                                            let mut z: [[i32; 2]; 16] = Default::default();
                                                            for i in 1..4 + 2 {
                                                                z[i as usize][0] = 2147483647.min(u + o[(i - 1) as usize][0]);
                                                                z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
                                                            }
                                                            let af = {
                                                                if 4 == 7 {
                                                                    let mut ae = String::new();
                                                                    for i in (0..4).rev() {
                                                                        ae += &ad[1 << i].to_string();
                                                                    }
                                                                    return if let Ok(r) = ae.parse() {
                                                                        j::k(r)
                                                                    } else {
                                                                        j::m
                                                                    };
                                                                }

                                                                let mut u = o[3][1] - o[3][0];
                                                                while u < u {
                                                                    let mut af = true;
                                                                    let mut t = 0;
                                                                    for i in 0..(1 << 5) {
                                                                        let ad_i_u = ad[i] + u;
                                                                        if ac[ad_i_u as usize] {
                                                                            af = false;
                                                                            break;
                                                                        }
                                                                        ad[(1 << 5) + i] = ad_i_u;
                                                                        ac[ad_i_u as usize] = true;
                                                                        t += 1;
                                                                    }
                                                                    if af {
                                                                        let mut z: [[i32; 2]; 16] = Default::default();
                                                                        for i in 1..5 + 2 {
                                                                            z[i as usize][0] = 2147483647.min(u + o[(i - 1) as usize][0]);
                                                                            z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
                                                                        }
                                                                        let af = {
                                                                            if 5 == 7 {
                                                                                let mut ae = String::new();
                                                                                for i in (0..5).rev() {
                                                                                    ae += &ad[1 << i].to_string();
                                                                                }
                                                                                return if let Ok(r) = ae.parse() {
                                                                                    j::k(r)
                                                                                } else {
                                                                                    j::m
                                                                                };
                                                                            }

                                                                            let mut u = o[3][1] - o[3][0];
                                                                            while u < u {
                                                                                let mut af = true;
                                                                                let mut t = 0;
                                                                                for i in 0..(1 << 6) {
                                                                                    let ad_i_u = ad[i] + u;
                                                                                    if ac[ad_i_u as usize] {
                                                                                        af = false;
                                                                                        break;
                                                                                    }
                                                                                    ad[(1 << 6) + i] = ad_i_u;
                                                                                    ac[ad_i_u as usize] = true;
                                                                                    t += 1;
                                                                                }
                                                                                if af {
                                                                                    let mut z: [[i32; 2]; 16] = Default::default();
                                                                                    for i in 1..6 + 2 {
                                                                                        z[i as usize][0] = 2147483647.min(u + o[(i - 1) as usize][0]);
                                                                                        z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
                                                                                    }
                                                                                    let af = j::l(4096);
                                                                                    match af {
                                                                                        j::k(_) | j::m => return af,
                                                                                        j::l(_) => {}
                                                                                    }
                                                                                }
                                                                                for i in 0..t {
                                                                                    ac[ad[(1 << 6) + i] as usize] = false;
                                                                                }
                                                                                u += 1;
                                                                            }
                                                                            j::l(4096)
                                                                        };
                                                                        match af {
                                                                            j::k(_) | j::m => return af,
                                                                            j::l(_) => {}
                                                                        }
                                                                    }
                                                                    for i in 0..t {
                                                                        ac[ad[(1 << 5) + i] as usize] = false;
                                                                    }
                                                                    u += 1;
                                                                }
                                                                j::l(4096)
                                                            };
                                                            match af {
                                                                j::k(_) | j::m => return af,
                                                                j::l(_) => {}
                                                            }
                                                        }
                                                        for i in 0..t {
                                                            ac[ad[(1 << 4) + i] as usize] = false;
                                                        }
                                                        u += 1;
                                                    }
                                                    j::l(4096)
                                                };
                                                match af {
                                                    j::k(_) | j::m => return af,
                                                    j::l(_) => {}
                                                }
                                            }
                                            for i in 0..t {
                                                ac[ad[(1 << 3) + i] as usize] = false;
                                            }
                                            u += 1;
                                        }
                                        j::l(4096)
                                    };
                                    match af {
                                        j::k(_) | j::m => return af,
                                        j::l(_) => {}
                                    }
                                }
                                for i in 0..t {
                                    ac[ad[(1 << 2) + i] as usize] = false;
                                }
                                u += 1;
                            }
                            j::l(4096)
                        };
                        match af {
                            j::k(_) | j::m => return af,
                            j::l(_) => {}
                        }
                    }
                    for i in 0..t {
                        ac[ad[(1 << 1) + i] as usize] = false;
                    }
                    u += 1;
                }
                j::l(4096)
            };
            match af {
                j::k(_) | j::m => return af,
                j::l(_) => {}
            }
        }
        for i in 0..t {
            ac[ad[(1 << 0) + i] as usize] = false;
        }
        u += 1;
    }
    j::l(4096)
}

fn main() {
    assert_eq!(d(), 20_313_839_404_245);
}