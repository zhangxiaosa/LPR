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
            let i = 0;
            let ad_i_u = ad[i] + u;
            if ac[ad_i_u as usize] {
                af = false;
            } else {
                ad[ab_unrolled + i] = ad_i_u;
                ac[ad_i_u as usize] = true;
                t += ab_unrolled;
            }

            if af {
                let mut z: [[i32; 2]; 16] = Default::default();
                z[1][0] = 2147483647.min(u + o[0][0]);
                z[1][1] = o[1][1].max(u + o[0][1]);
                // Unrolled iteration
                let af = n(aa, &z, p, u, ab + 1, ac, ad);
                match af {
                    j::k(_) | j::m => return af,
                    j::l(_) => {}
                }
            }

            // Clean up
            ac[ad[ab_unrolled] as usize] = false;

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