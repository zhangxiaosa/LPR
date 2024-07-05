fn d() -> u64 {
    let mut ae = String::new();
    let mut u = 0i32;
    let mut t = 0;
    let mut ab_unrolled = 0;
    let mut z: [[i32; 2]; 16] = [[0i32; 2usize]; 16usize];

    fn n(o: &[[i32; 2]; 16], ab: i32, q: i32, ac: &mut [bool; 8192], ad: &mut [i32; 128]) -> i64 {
        if ab == 7 {
            for i in (0..ab).rev() {
                ae.push_str(&ad[1 << i].to_string());
            }
            return if let Ok(r) = ae.parse() { ad_i_u } else { 0 };
        }

        while u < q {
            let mut af = true;

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
                for i in 1..ab + 2 {
                    z[i as usize][0] = 2147483647.min(u + o[(i - 1) as usize][0]);
                    z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
                }
                let af = n(&z, ab + 1, u, ac, ad);

                if af != 0 {
                    return af;
                }
            }

            for i in 0..(t / ab_unrolled) {
                ac[ad[ab_unrolled + i] as usize] = false;
            }

            u += 1;
        }

        return 4096;
    }

    let mut ac: [bool; 8192] = [false; 8192];
    let mut ad: [i32; 128] = [0; 128];
    let ad_i_u = n(&Default::default(), 0, 4096, &mut ac, &mut ad);

    return ad_i_u as u64;
}

fn main() {
    assert_eq!(d(), 20_313_839_404_245);
}