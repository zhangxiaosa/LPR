fn d() -> u64 {
    let mut ac = [false; 8192];
    let mut ad = [0i32; 128];
    let o = Default::default();
    let aa = 7;
    let q = 4096;
    let p = 4096;
    let mut ab = 0;
    let mut u = 0;
    let mut t = 0;
    let mut af = false;
    let mut z = [[0i32; 2]; 16];
    let mut ae = String::new();
    let mut ad_i_u = 0;
    let mut r = 0;

    while u < q {
        af = true;

        for i in 0..(1 << ab) {
            ad_i_u = ad[i] + u;
            if ac[ad_i_u as usize] {
                af = false;
                break;
            }
            ad[(1 << ab) + i] = ad_i_u;
            ac[ad_i_u as usize] = true;
            t += 1 << ab;
        }

        if af {
            for i in 1..ab + 2 {
                z[i as usize][0] = 2147483647.min(u + o[(i - 1) as usize][0]);
                z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
            }

            if ab == aa {
                for i in (0..ab).rev() {
                    ae += ad[(1 << i + 1) - 1].to_string().as_str();
                }
                if let Ok(rr) = ae.parse::<u64>() {
                    r = rr;
                    return r;
                }
            }

            match n(aa, &z, p, u, ab + 1, &mut ac, &mut ad) {
                j::k(_) | j::m => return 0,
                j::l(_) => {}
            }
        }

        for i in 0..(t >> ab) {
            ac[ad[(1 << ab) + i] as usize] = false;
        }

        u += 1;
    }

    return p as u64;
}

fn main() {
    assert_eq!(d(), 20_313_839_404_245);
}