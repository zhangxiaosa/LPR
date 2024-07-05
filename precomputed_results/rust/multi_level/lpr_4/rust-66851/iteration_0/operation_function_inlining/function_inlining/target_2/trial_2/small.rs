fn d() -> Option<u64> {
    let ac: [bool; 1 << 12] = [false; 1 << 12];
    let mut ad: [i32; 1 << 7] = [0; 1 << 7];
    let mut o: [[i32; 2]; 16] = Default::default();
    o[1][0] = std::i32::MAX;

    let aa = 7;
    let ab = aa;
    let p = 1 << 12;
    let q = p;
    let mut u = 0;
    let y = q;

    while u < y {
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
            let mut z: [[i32; 2]; 16] = Default::default();
            z[ab + 2][0] = std::i32::MAX;
            for i in 1..ab + 2 {
                z[i][0] = o[i][0].min(u + o[i - 1][0]);
                z[i][1] = o[i][1].max(u + o[i - 1][1]);
            }
            let af = {
                if ab + 1 == aa {
                    let mut ae = String::new();
                    for i in (0..ab).rev() {
                        ae += &ad[1 << i].to_string();
                    }
                    if let Ok(r) = ae.parse() {
                        Some(r)
                    } else {
                        None
                    }
                } else {
                    let ac = ac;
                    let ad = ad;
                    let o = o;
                    let p = p;
                    let q = u;
                    let ab = ab + 1;
                    let mut ac = ac.clone();
                    let mut ad = ad.clone();
                    let ans = (ab, aa, o, p, q, ac.as_mut(), ad.as_mut());
                    Some(ans)
                }
            };
            match af {
                Some(_) => return af,
                None => {}
            }
        }
        for i in 0..ah {
            ac[ad[ag + i] as usize] = false;
        }
        u += 1;
    }
    Some(p as u64)
}

fn main() {
    assert_eq!(d(), Some(20_313_839_404_245));
}