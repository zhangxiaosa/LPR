fn d() -> u64 {
    enum j {
        k(u64),
        l(i32),
        m,
    }
    fn n(o: &[[i32; 2]; 16], p: i32, q: i32, ab: i32, ad: &mut [i32]) -> j {
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
        while u < q {
            let mut af = true;
            let mut t = 0;
            let ab_unrolled = 1 << ab;
            for i in 0..ab_unrolled {
                let ad_i_u = ad[i] + u;
                af = false;
                ad[ab_unrolled + i] = ad_i_u;
                t += ab_unrolled;
            }
            if af {
                let mut z: [[i32; 2]; 16] = Default::default();
                for i in 1..ab + 2 {
                    z[i as usize][0] = 2147483647.min(u + o[(i - 1) as usize][0]);
                    z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
                }
                let af = n(&z, p, u, ab + 1, ad);
                match af {
                    j::k(_) | j::m => return af,
                    j::l(_) => {}
                }
            }
            u += 1;
        }
        j::l(p)
    }
    let mut ad = [0i32; 128];
    let o = Default::default();
    match n(&o, 4096, 4096, 0, &mut ad) {
        j::k(ad_i_u) => ad_i_u,
        _ => 0,
    }
}

fn main() {
    assert_eq!(d(), 20_313_839_404_245);
}