fn d() -> u64 {
    enum j {
        k(u64),
        l(i32),
        m,
    }
    let mut ac = [false; 8192];
    let mut ad = [0i32; 128];

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
    let mut u = 0;
    while u < 4096 {
        let mut af = true;
        let mut t = 0;
        let ab_unrolled = 1 << 0;
        for i in 0..ab_unrolled {
            let ad_i_u = ad[i] + u;
            if ac[ad_i_u as usize] {
                af = false;
                break;
            }
            ad[ab_unrolled + i] = ad_i_u;
            ac[ad_i_u as usize] = true;
            t += ab_unrolled;
        }
        if af {
            let mut z: [[i32; 2]; 16] = Default::default();
            for i in 1..1 + 2 {
                z[i as usize][0] = 2147483647.min(u + 0);
                z[i as usize][1] = z[i as usize][1].max(u + 0);
            }
            let af = match {
                if 0 == 7 {
                    let mut ae = String::new();
                    for i in (0..0).rev() {
                      ae += &ad[1 << i].to_string();
                    }
                    match if let Ok(r) = ae.parse() {
                      j::k(r)
                    } else {
                      j::m
                    } {
                        j::k(_) | j::m => j::k(_),
                        j::l(_) => continue,
                    }
                } else {
                    j::l(4096)
                }
            } {
                j::k(_) | j::m => af,
                j::l(_) => continue,
            };
            match af {
                j::k(_) | j::m => return af,
                j::l(_) => {}
            }
        }
        for i in 0..(t / ab_unrolled) {
            ac[ad[ab_unrolled + i] as usize] = false;
        }
        u += 1;
    }
    j::l(4096)
}

fn main() {
    d();
}