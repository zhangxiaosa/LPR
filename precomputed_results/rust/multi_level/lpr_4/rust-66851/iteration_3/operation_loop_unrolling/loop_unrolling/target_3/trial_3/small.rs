fn d() -> u64 {
    enum j {
        k(u64),
        l(i32),
        m,
    }
    fn n(o: &[[i32; 2]; 16], ab: i32, q: i32, ac: &mut [bool], ad: &mut [i32]) -> j {
        if ab == 7 {
            let mut ae = String::new();
            for i in (0..ab).rev() {
                ae += &ad[1 << i].to_string();
            }
            return if let Ok(r) = ae.parse() {
                j::k(r)
            } else {
                j::m
            };
        }
        let mut u = o[3][1] - o[3][0];
        let mut t = 0;
        let ab_unrolled = 1 << ab;
        let N = 4; // Number of loop unrolling iterations
        while u + N <= q {
            let mut af = true;

            // Unrolled loop body iteration 1
            let ad_0_u = ad[0] + u;
            if ac[ad_0_u as usize] {
                af = false;
            } else {
                ad[ab_unrolled + 0] = ad_0_u;
                ac[ad_0_u as usize] = true;
                t += ab_unrolled;
            }

            // Unrolled loop body iteration 2
            let ad_1_u = ad[1] + u;
            if ac[ad_1_u as usize] {
                af = false;
            } else {
                ad[ab_unrolled + 1] = ad_1_u;
                ac[ad_1_u as usize] = true;
                t += ab_unrolled;
            }

            // Unrolled loop body iteration 3
            let ad_2_u = ad[2] + u;
            if ac[ad_2_u as usize] {
                af = false;
            } else {
                ad[ab_unrolled + 2] = ad_2_u;
                ac[ad_2_u as usize] = true;
                t += ab_unrolled;
            }

            // Unrolled loop body iteration 4
            let ad_3_u = ad[3] + u;
            if ac[ad_3_u as usize] {
                af = false;
            } else {
                ad[ab_unrolled + 3] = ad_3_u;
                ac[ad_3_u as usize] = true;
                t += ab_unrolled;
            }

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

            // Clear the flags for previous unrolled loop bodies
            for i in 0..N {
                ac[ad[ab_unrolled + i] as usize] = false;
            }

            u += N;
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