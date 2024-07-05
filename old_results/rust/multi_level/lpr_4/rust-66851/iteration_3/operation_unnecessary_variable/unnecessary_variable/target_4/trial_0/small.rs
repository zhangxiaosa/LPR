enum j {
    k(u64),
    l(i32),
    m,
}

type MyArray = [[i32; 2]; 16];

fn n(o: &MyArray, ab: i32, q: i32, ac: &mut [bool], ad: &mut [i32]) -> j {
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
        for i in 0..(1 << ab) {
            let ad_i_u = ad[i] + u;
            if ac[ad_i_u as usize] {
                af = false;
                break;
            }
            ad[(1 << ab) + i] = ad_i_u;
            ac[ad_i_u as usize] = true;
            t += 1 << ab;
        }
        if af {
            let ab_plus_1 = ab + 1;
            let mut z_i_0 = 2147483647.min(u + o[0][0]);
            let mut z_i_1 = o[1][1].max(u + o[0][1]);
            for i in 2..ab_plus_1 {
                let o_i_u = o[(i - 1) as usize][0];
                let o_i_1 = o[i as usize][1];
                z_i_0 = 2147483647.min(u + o_i_u);
                z_i_1 = o_i_1.max(u + o_i_u);
            }
            let af = n(&[[z_i_0, z_i_1], [0, 0], [0, 0], [0, 0], [0, 0], [0, 0], [0, 0], [0, 0], [0, 0], [0, 0], [0, 0], [0, 0], [0, 0], [0, 0], [0, 0], [0, 0]], ab_plus_1, u, ac, ad);
            match af {
                j::k(_) | j::m => return af,
                j::l(_) => {}
            }
        }
        for i in 0..(t >> ab) {
            ac[ad[(1 << ab) + i] as usize] = false;
        }
        u += 1;
    }
    j::l(4096)
}

fn d() -> u64 {
    let mut ac = [false; 8192];
    let mut ad = [0i32; 128];
    match n(&Default::default(), 0, 4096, &mut ac, &mut ad) {
        j::k(ad_i_u) => ad_i_u,
        _ => 0,
    }
}

fn main() {
    assert_eq!(d(), 20313839404245);
}