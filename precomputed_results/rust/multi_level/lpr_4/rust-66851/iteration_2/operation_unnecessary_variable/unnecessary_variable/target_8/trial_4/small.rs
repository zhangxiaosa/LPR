fn d() -> u64 {
    enum j {
        k(u64),
        l(i32),
        m,
    }
    fn n(p: i32, q: i32, ab: i32, ac: &mut [bool], ad: &mut [i32]) -> j {
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
        let mut u = [0; 16];
        let mut u_idx = 0;
        while u[u_idx] < q {
            let mut af = true;
            let mut t = 0;
            let ab_unrolled = 1 << ab;
            for i in 0..ab_unrolled {
                let ad_i_u = ad[i] + u[u_idx];
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
                for i in 1..ab + 2 {
                    z[i as usize][0] = 2147483647.min(u[u_idx] + _o[(i - 1) as usize][0]);
                    z[i as usize][1] = _o[i as usize][1].max(u[u_idx] + _o[(i - 1) as usize][1]);
                }
                let af = n(p, u[u_idx], ab + 1, ac, ad);
                match af {
                    j::k(_) | j::m => return af,
                    j::l(_) => {}
                }
            }
            for i in 0..(t / ab_unrolled) {
                ac[ad[ab_unrolled + i] as usize] = false;
            }
            u[u_idx] += 1;
            if u[u_idx] >= q {
                u_idx += 1;
                if u_idx >= 16 {
                    break;
                }
            }
        }
        j::l(p)
    }
    let mut ac = [false; 8192];
    let mut ad = [0i32; 128];
    let _o = Default::default();
    match n(4096, 4096, 0, &amp;mut ac, &amp;mut ad) {
        j::k(ad_i_u) =&gt; ad_i_u,
        _ =&gt; 0,
    }
}

fn main() {
    assert_eq!(d(), 20_313_839_404_245);
}