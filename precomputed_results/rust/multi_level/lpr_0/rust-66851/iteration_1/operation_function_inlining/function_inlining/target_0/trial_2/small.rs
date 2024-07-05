fn main() {
    const e: i32 = 7;
    const f: i32 = 1 << 12;
    const w: usize = f as _;
    enum j {
        k(u64),
        l(i32),
        m,
    }
    
    const aa: i32 = e;
    const o: [[i32; 2]; 16] = Default::default();
    const p: i32 = f;
    const q: i32 = f;
    const ab: i32 = 0;
    let mut ac = [false; w];
    let mut ad = [0i32; 1 << e];
    
    if ab == aa {
        let mut ae = String::new();
        for i in (0..ab).rev() {
            ae += &ad[1 << i].to_string();
        }
        let af = ae.parse();
        return if let Ok(r) = af {
            assert_eq!(Some(j::k(r)), Some(20_313_839_404_245));
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
            let mut z: [[i32; 2]; 16] = Default::default();
            z[ab as usize + 2][0] = std::i32::MAX;
            for i in 1..ab + 2 {
                z[i as usize][0] = o[i as usize][0].min(u + o[i as usize - 1][0]);
                z[i as usize][1] = o[i as usize][1].max(u + o[i as usize - 1][1]);
            }
            if ab + 1 == aa {
                let af = z;
                
                if af.is_ok() {
                    assert_eq!(Some(j::k(af)), Some(20_313_839_404_245));
                } else if af == j::m {
                    panic!();
                }
            } else if ab + 1 < aa {
                const aa: i32 = aa;
                const o: &[[i32; 2]] = &z;
                const p: i32 = p;
                const u: i32 = u;
                const ab: i32 = ab + 1;
                const ac: &mut [bool] = &mut ac;
                const ad: &mut [i32] = &mut ad;
                let mut ac = ac.clone();
                let mut ad = ad.clone();
                let mut ac = &mut ac;
                let mut ad = &mut ad;
                continue;
            }
        }
        for i in 0..ah {
            ac[ad[ag + i] as usize] = false;
        }
        u += 1;
    }
    j::l(p)
}