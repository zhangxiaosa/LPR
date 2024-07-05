fn d() -> u64 {
    const f: i32 = 1 << 12;

    fn n(
        o: &[[i32; 2]],
        p: i32,
        q: i32,
        ab: i32,
    ) -> u64 {
        if ab == 7 {
            let mut ae = String::new();
            let ad = [0i32; 1 << 7];
            for i in (0..ab).rev() {
                ae += &ad[1 << i].to_string();
            }
            return match ae.parse() {
                Ok(r) => r,
                Err(_) => return 0,
            };
        }
        let mut t = 0;
        for i in 0..ab {
            t = t.max(o[i + 1][1] - o[i + 1][0]);
        }
        let mut u = t;
        while u < q {
            let mut af = true;
            let ag = 1 << ab;
            let mut ah = 0;
            let mut ad = [0i32; 1 << 8];
            let ac_decomposed = [false; 16];
            for i in 0..ag {
                let s = ad[i] + u;
                if ac_decomposed[s] {
                    af = false;
                    break;
                }
                ad[ag + i] = s;
                ac_decomposed[s] = true;
                ah += 1;
            }
            if af {
                let mut z: [[i32; 2]; 16] = Default::default();
                z[ab + 2][0] = std::i32::MAX;
                for i in 1..=ab + 1 {
                    z[i][0] = o[i][0].min(u + o[i - 1][0]);
                    z[i][1] = o[i][1].max(u + o[i - 1][1]);
                }
                let af = n(&z, p, u, ab + 1);
                match af {
                    r => return r,
                }
            }
            for i in 0..ah {
                ac_decomposed[ad[ag + i]] = false;
            }
            u += 1;
        }
        p as u64
    }

    let mut o: [[i32; 2]; 16] = Default::default();
    o[1][0] = std::i32::MAX;
    n(&o, f, f, 0)
}

assert_eq!(d(), 20_313_839_404_245);