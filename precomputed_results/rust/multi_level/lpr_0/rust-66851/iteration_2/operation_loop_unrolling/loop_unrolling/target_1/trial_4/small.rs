fn main() {
    const f: i32 = 1 << 12;
    let mut ac = [false; f as usize];
    let mut ad = [0i32; 1 << 7];
    let mut o = [[0i32; 2]; 16];
    o[1][0] = std::i32::MAX;
    match n(7, &o, f, f, 0, &mut ac, &mut ad) {
        j::k(s) => assert_eq!(Some(s), Some(20_313_839_404_245)),
        _ => panic!(),
    }
}

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
    while u < q {
        let mut af = true;
        let ag = 1 << ab;
        let mut ah = 0;
        for i in (0..ag).step_by(4) {
            let s_1 = ad[i] + u;
            let s_2 = ad[i + 1] + u;
            let s_3 = ad[i + 2] + u;
            let s_4 = ad[i + 3] + u;

            if ac[s_1 as usize] || ac[s_2 as usize] || ac[s_3 as usize] || ac[s_4 as usize] {
                af = false;
                break;
            }

            ad[ag + i] = s_1;
            ad[ag + i + 1] = s_2;
            ad[ag + i + 2] = s_3;
            ad[ag + i + 3] = s_4;

            ac[s_1 as usize] = true;
            ac[s_2 as usize] = true;
            ac[s_3 as usize] = true;
            ac[s_4 as usize] = true;

            ah += 4;
        }
        if af {
            let mut z = [[0i32; 2]; 16];
            z[ab as usize + 2][0] = std::i32::MAX;
            for i in 1..ab + 2 {
                z[i as usize][0] = o[i as usize][0].min(u + o[i as usize - 1][0]);
                z[i as usize][1] = o[i as usize][1].max(u + o[i as usize - 1][1]);
            }
            let af = n(aa, &z, p, u, ab + 1, ac, ad);
            match af {
                j::k(_) | j::m => return af,
                j::l(_) => {}
            }
        }
        for i in 0..ah {
            ac[ad[ag + i] as usize] = false;
        }
        u += 1;
    }
    j::l(p)
}