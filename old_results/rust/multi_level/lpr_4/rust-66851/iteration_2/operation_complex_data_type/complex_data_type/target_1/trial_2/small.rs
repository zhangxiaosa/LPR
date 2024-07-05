fn d() -> u64 {
    let mut ac = [false; 8192];
    let mut ad = [0i32; 128];
    let o = Default::default();
    let aa = 7i32;
    let q = 4096i32;
    let ab = 0i32;
    let mut u = o[3][1] - o[3][0];
    let mut ae = String::new();
    let mut t = 0;
    let mut af = true;
    let mut z = [[0i32; 2]; 16];
    let mut r = 0u64;

    if ab == aa {
        for i in (0..ab).rev() {
            ae += &ad[1 << i].to_string();
        }
        if let Ok(parsed) = ae.parse() {
            r = parsed;
        }
    }

    while u < q {
        for i in 0..=ab {
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
            for i in 1..=ab + 1 {
                z[i as usize][0] = 2147483647.min(u + o[(i - 1) as usize][0]);
                z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
            }

            let recursive_result = n(aa, &z, p, u, ab + 1, ac, ad);
            match recursive_result {
                j::k(value) | j::m => {
                    r = value;
                    break;
                }
                j::l(_) => {}
            }
        }

        for i in 0..(t / ab_unrolled) {
            ac[ad[ab_unrolled + i] as usize] = false;
        }

        u += 1;
    }

    if ab != aa {
        j::l(p)
    } else {
        j::k(r)
    }
}

fn main() {
    assert_eq!(d(), 20_313_839_404_245);
}