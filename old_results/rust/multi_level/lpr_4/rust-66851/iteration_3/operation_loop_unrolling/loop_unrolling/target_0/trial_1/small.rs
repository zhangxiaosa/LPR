fn d() -> u64 {
    enum j {
        k(u64),
        l(i32),
        m,
    }
    fn n(o: &[[i32; 2]; 16], ab: i32, q: i32, ac: &mut [bool], ad: &mut [i32]) -> j {
        if ab == 7 {
            let mut ae = String::new();
            ae += &ad[1 << ab].to_string();
            return if let Ok(r) = ae.parse() {
                j::k(r)
            } else {
                j::m
            };
        }
        let mut u = o[3][1] - o[3][0];
        while u < q {
            let mut af = true;
            let mut t = 0;
            let ab_unrolled = 1 << ab;
            let ad_i_u_0 = ad[0] + u;
            if ac[ad_i_u_0 as usize] {
                af = false;
            } else {
                ad[ab_unrolled + 0] = ad_i_u_0;
                ac[ad_i_u_0 as usize] = true;
                t += ab_unrolled;
            }
            let ad_i_u_1 = ad[1] + u;
            if ac[ad_i_u_1 as usize] {
                af = false;
            } else {
                ad[ab_unrolled + 1] = ad_i_u_1;
                ac[ad_i_u_1 as usize] = true;
                t += ab_unrolled;
            }
            // ...continue unrolling for the remaining iterations (up to ab)

            if af {
                let mut z: [[i32; 2]; 16] = Default::default();
                for i in 1..ab + 2 {
                    z[i as usize][0] = 2147483647.min(u + o[(i - 1) as usize][0]);
                    z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
                }
                let af = n(&z, ab + 1, u, ac, ad);
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

    let mut ac = [false; 8192];
    let mut ad = [0i32; 128];
    match n(&Default::default(), 0, 4096, &mut ac, &mut ad) {
        j::k(ad_i_u) => ad_i_u,
        _ => 0,
    }
}

fn main() {
    assert_eq!(d(), 20_313_839_404_245);
}