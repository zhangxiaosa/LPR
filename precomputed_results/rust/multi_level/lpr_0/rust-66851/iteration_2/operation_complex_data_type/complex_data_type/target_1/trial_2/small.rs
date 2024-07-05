fn main() {
    const f: f64 = 1 << 12;
    let mut ac = vec![false; f as usize];
    let mut ad = vec![0i32; 1 << 7];
    let mut o = vec![vec![0i32; 2]; 16];
    o[1][0] = std::i32::MAX;
    match n(7, &mut o, f, f, 0, &mut ac, &mut ad) {
        ModifiedEnumType::k_f64(s) => assert_eq!(Some(s), Some(20_313_839_404_245)),
        _ => panic!(),
    }
}

enum ModifiedEnumType {
    k_f64(f64),
    l_i32(i32),
    m,
}

fn n(aa: i32, o: &mut [[i32; 2]], p: f64, q: f64, ab: i32, ac: &mut [bool], ad: &mut [i32]) -> ModifiedEnumType {
    if ab == aa {
        let mut ae = String::new();
        for i in (0..ab).rev() {
            ae += &ad[1 << i].to_string();
        }
        return if let Ok(r) = ae.parse() {
            ModifiedEnumType::k_f64(r)
        } else {
            ModifiedEnumType::m
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
            let mut z = vec![vec![0i32; 2]; 16];
            z[ab as usize + 2][0] = std::i32::MAX;
            for i in 1..ab + 2 {
                z[i as usize][0] = o[i as usize][0].min(u + o[i as usize - 1][0]);
                z[i as usize][1] = o[i as usize][1].max(u + o[i as usize - 1][1]);
            }
            let af = n(aa, &mut z, p, u, ab + 1, ac, ad);
            match af {
                ModifiedEnumType::k_f64(_) | ModifiedEnumType::m => return af,
                ModifiedEnumType::l_i32(_) => {}
            }
        }
        for i in 0..ah {
            ac[ad[ag + i] as usize] = false;
        }
        u += 1;
    }
    ModifiedEnumType::l_i32(p as i32)
}
