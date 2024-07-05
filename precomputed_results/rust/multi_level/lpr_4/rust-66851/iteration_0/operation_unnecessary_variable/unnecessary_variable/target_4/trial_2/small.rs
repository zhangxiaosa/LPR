fn d() -> u64 {
    enum j {
        k(u64),
        m,
    }

    fn n(
        aa: i32,
        o: &[[i32; 2]; 16],
        p: i32,
        q: i32,
        ab: i32,
        ac: &mut [bool; 4096],
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
        let mut t = 0;
        let y = q;
        for i in 0..ab {
            let index = i as usize;
            t = t.max(o[index + 1][1] - o[index + 1][0]);
        }
        let mut u = t;
        while u < y {
            let mut af = true;
            let ag = 1 << ab;
            let mut t = 0;
            for i in 0..ag {
                let s = ad[i] + u;
                if ac[s as usize] {
                    af = false;
                    break;
                }
                ad[ag + i] = s;
                ac[s as usize] = true;
                t += 1;
            }
            if af {
                let mut z: [[i32; 2]; 16] = Default::default();
                z[ab as usize + 2][0] = 2147483647;
                for i in 1..ab + 2 {
                    z[i as usize][0] = 2147483647.min(u + o[(i - 1) as usize][0]);
                    z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
                }
                let af = n(aa, &z, p, u, ab + 1, ac, ad);
                match af {
                    j::k(_) | j::m => return af,
                }
            }
            for i in 0..t {
                ac[ad[ag + i] as usize] = false;
            }
            u += 1;
        }
        j::k(p as u64)
    }

    let mut ac = [false; 4096];
    let mut ad = [0i32; 1 << 7];
    let mut o: [[i32; 2]; 16] = Default::default();
    o[1][0] = 2147483647;
    match n(7, &o, 4096, 4096, 0, &mut ac, &mut ad) {
        j::k(s) => s,
        _ => 0,
    }
}

fn main() {
    assert_eq!(d(), 20_313_839_404_245);
}