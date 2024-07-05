fn d() -> u64 {
    enum j {
        k(u64),
        l(i32),
        m,
    }

    fn n(
        aa: i32,
        o: &[[i32; 2]; 16],
        p: i32,
        q: i32,
        ab: i32,
        ac: &mut [bool],
        ad: &mut [i32],
    ) -> j {
        if ab == aa {
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
        while u < q {
            let mut af = true;
            let mut t = 0;
            let ab_unrolled = 1 << ab;

            // Unrolled loop
            let i0 = 0;
            let i1 = 1;
            let i2 = 2;
            let i3 = 3;
            let i4 = 4;
            let i5 = 5;
            let i6 = 6;
            let i7 = 7;

            let ad_i_u_0 = ad[i0] + u;
            if ac[ad_i_u_0 as usize] {
                af = false;
            } else {
                ad[ab_unrolled + i0] = ad_i_u_0;
                ac[ad_i_u_0 as usize] = true;
                t += ab_unrolled;
            }

            let ad_i_u_1 = ad[i1] + u;
            if ac[ad_i_u_1 as usize] {
                af = false;
            } else {
                ad[ab_unrolled + i1] = ad_i_u_1;
                ac[ad_i_u_1 as usize] = true;
                t += ab_unrolled;
            }

            let ad_i_u_2 = ad[i2] + u;
            if ac[ad_i_u_2 as usize] {
                af = false;
            } else {
                ad[ab_unrolled + i2] = ad_i_u_2;
                ac[ad_i_u_2 as usize] = true;
                t += ab_unrolled;
            }

            let ad_i_u_3 = ad[i3] + u;
            if ac[ad_i_u_3 as usize] {
                af = false;
            } else {
                ad[ab_unrolled + i3] = ad_i_u_3;
                ac[ad_i_u_3 as usize] = true;
                t += ab_unrolled;
            }

            let ad_i_u_4 = ad[i4] + u;
            if ac[ad_i_u_4 as usize] {
                af = false;
            } else {
                ad[ab_unrolled + i4] = ad_i_u_4;
                ac[ad_i_u_4 as usize] = true;
                t += ab_unrolled;
            }

            let ad_i_u_5 = ad[i5] + u;
            if ac[ad_i_u_5 as usize] {
                af = false;
            } else {
                ad[ab_unrolled + i5] = ad_i_u_5;
                ac[ad_i_u_5 as usize] = true;
                t += ab_unrolled;
            }

            let ad_i_u_6 = ad[i6] + u;
            if ac[ad_i_u_6 as usize] {
                af = false;
            } else {
                ad[ab_unrolled + i6] = ad_i_u_6;
                ac[ad_i_u_6 as usize] = true;
                t += ab_unrolled;
            }

            let ad_i_u_7 = ad[i7] + u;
            if ac[ad_i_u_7 as usize] {
                af = false;
            } else {
                ad[ab_unrolled + i7] = ad_i_u_7;
                ac[ad_i_u_7 as usize] = true;
                t += ab_unrolled;
            }

            // End of unrolled loop

            if af {
                let mut z: [[i32; 2]; 16] = Default::default();
                for i in 1..ab + 2 {
                    z[i as usize][0] = 2147483647.min(u + o[(i - 1) as usize][0]);
                    z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
                }
                let af = n(aa, &z, p, u, ab + 1, ac, ad);
                match af {
                    j::k(_) | j::m => return af,
                    j::l(_) => {}
                }
            }

            // Unrolled loop cleanup
            for i in 0..(t / ab_unrolled) {
                ac[ad[ab_unrolled + i] as usize] = false;
            }
            // End of unrolled loop cleanup

            u += 1;
        }
        j::l(p)
    }

    let mut ac = [false; 8192];
    let mut ad = [0i32; 128];
    let o = Default::default();
    match n(7, &o, 4096, 4096, 0, &mut ac, &mut ad) {
        j::k(ad_i_u) => ad_i_u,
        _ => 0,
    }
}

fn main() {
    assert_eq!(d(), 20_313_839_404_245);
}