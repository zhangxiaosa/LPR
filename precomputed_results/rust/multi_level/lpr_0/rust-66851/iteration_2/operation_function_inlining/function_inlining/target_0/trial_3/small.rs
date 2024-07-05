fn main() {
    const f: i32 = 1 << 12;
    let mut ac = [false; f as usize];
    let mut ad = [0i32; 1 << 7];
    let mut o = [[0i32; 2]; 16];
    o[1][0] = std::i32::MAX;
    let aa = 7;
    let p = f;
    let q = f;
    let ab = 0;
    if ab == aa {
        let mut ae = String::new();
        for i in (0..ab).rev() {
            ae += &ad[1 << i].to_string();
        }
        return if let Ok(r) = ae.parse() {
            assert_eq!(Some(r), Some(20_313_839_404_245));
        } else {
            panic!();
        };
    }
    let mut t = 0;
    t = t.max(o[2 + 1][1] - o[2 + 1][0]);
    let mut u = t;
    while u < q {
        let mut af = true;
        let ag = 1 << ab;
        let mut ah = 0;
        for i in 0..ag {
            let s = ad[i] + u;
            if ac[s as usize] {
                af = false;
                break;
            }
            ad[ag + i] = s;
            ac[s as usize] = true;
            ah += 1;
        }
        if af {
            let mut z = [[0i32; 2]; 16];
            z[ab as usize + 2][0] = std::i32::MAX;
            for i in 1..ab + 2 {
                z[i as usize][0] = o[i as usize][0].min(u + o[i as usize - 1][0]);
                z[i as usize][1] = o[i as usize][1].max(u + o[i as usize - 1][1]);
            }
            let af = {
                let ab = ab + 1;
                let mut ac = ac;
                let mut ad = ad;
                let aa = aa;
                let p = p;
                let q = u;
                n(aa, &z, p, q, ab, &mut ac, &mut ad)
            };
            if let j::k(_) | j::m = af {
                assert_eq!(Some(s), Some(20_313_839_404_245));
            } else {
                // Do nothing
            }
        }
        for i in 0..ah {
            ac[ad[ag + i] as usize] = false;
        }
        u += 1;
    }
    assert_eq!(j::l(p), Some(20_313_839_404_245));
}

enum j {
    k(u64),
    l(i32),
    m
}
