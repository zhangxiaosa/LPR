fn main() {
    const e: i32 = 7;
    const f: i32 = 1 << 12;
    const w: usize = f as _;
    enum j {
        k(u64),
        l(i32),
        m,
    }
    fn n(aa: i32, o: &[[i32; 2]], p: i32, q: i32, ab: i32, ac: &mut [bool], ad: &mut [i32]) -> j {
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
        t = t.max(o[2 + 1][1] - o[2 + 1][0]);
        let mut u = t;
        while u < q - 3 {
            let mut af1 = true;
            let ag1 = 1 << ab;
            let mut ah1 = 0;
            for i in 0..ag1 {
                let s1 = ad[i] + u;
                if ac[s1 as usize] {
                    af1 = false;
                    break;
                }
                ad[ag1 + i] = s1;
                ac[s1 as usize] = true;
                ah1 += 1;
            }
            if af1 {
                let mut z1: [[i32; 2]; 16] = Default::default();
                z1[ab as usize + 2][0] = std::i32::MAX;
                for i in 1..ab + 2 {
                    z1[i as usize][0] = o[i as usize][0].min(u + o[i as usize - 1][0]);
                    z1[i as usize][1] = o[i as usize][1].max(u + o[i as usize - 1][1]);
                }
                let af1 = n(aa, &z1, p, u, ab + 1, ac, ad);
                match af1 {
                    j::k(_) | j::m => return af1,
                    j::l(_) => {}
                }
            }
            for i in 0..ah1 {
                ac[ad[ag1 + i] as usize] = false;
            }
            u += 1;

            let mut af2 = true;
            let ag2 = 1 << ab;
            let mut ah2 = 0;
            for i in 0..ag2 {
                let s2 = ad[i] + u;
                if ac[s2 as usize] {
                    af2 = false;
                    break;
                }
                ad[ag2 + i] = s2;
                ac[s2 as usize] = true;
                ah2 += 1;
            }
            if af2 {
                let mut z2: [[i32; 2]; 16] = Default::default();
                z2[ab as usize + 2][0] = std::i32::MAX;
                for i in 1..ab + 2 {
                    z2[i as usize][0] = o[i as usize][0].min(u + o[i as usize - 1][0]);
                    z2[i as usize][1] = o[i as usize][1].max(u + o[i as usize - 1][1]);
                }
                let af2 = n(aa, &z2, p, u, ab + 1, ac, ad);
                match af2 {
                    j::k(_) | j::m => return af2,
                    j::l(_) => {}
                }
            }
            for i in 0..ah2 {
                ac[ad[ag2 + i] as usize] = false;
            }
            u += 1;

            let mut af3 = true;
            let ag3 = 1 << ab;
            let mut ah3 = 0;
            for i in 0..ag3 {
                let s3 = ad[i] + u;
                if ac[s3 as usize] {
                    af3 = false;
                    break;
                }
                ad[ag3 + i] = s3;
                ac[s3 as usize] = true;
                ah3 += 1;
            }
            if af3 {
                let mut z3: [[i32; 2]; 16] = Default::default();
                z3[ab as usize + 2][0] = std::i32::MAX;
                for i in 1..ab + 2 {
                    z3[i as usize][0] = o[i as usize][0].min(u + o[i as usize - 1][0]);
                    z3[i as usize][1] = o[i as usize][1].max(u + o[i as usize - 1][1]);
                }
                let af3 = n(aa, &z3, p, u, ab + 1, ac, ad);
                match af3 {
                    j::k(_) | j::m => return af3,
                    j::l(_) => {}
                }
            }
            for i in 0..ah3 {
                ac[ad[ag3 + i] as usize] = false;
            }
            u += 1;
        }
        j::l(p)
    }
    let mut ac = [false; w];
    let mut ad = [0i32; 1 << e];
    let mut o: [[i32; 2]; 16] = Default::default();
    o[1][0] = std::i32::MAX;
    match n(e, &o, f, f, 0, &mut ac, &mut ad) {
        j::k(s) => assert_eq!(Some(s), Some(20_313_839_404_245)),
        _ => panic!(),
    }
}