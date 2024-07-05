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
            const Z: [[i32; 2]; 16] = [
                [0, std::i32::MAX],
                [0, std::i32::MAX],
                [o[2 + 1][0].min(u + o[2][0]), o[2 + 1][1].max(u + o[2][1])],
                [o[3 + 1][0].min(u + o[3][0]), o[3 + 1][1].max(u + o[3][1])],
                [o[4 + 1][0].min(u + o[4][0]), o[4 + 1][1].max(u + o[4][1])],
                [o[5 + 1][0].min(u + o[5][0]), o[5 + 1][1].max(u + o[5][1])],
                [o[6 + 1][0].min(u + o[6][0]), o[6 + 1][1].max(u + o[6][1])],
                [o[7 + 1][0].min(u + o[7][0]), o[7 + 1][1].max(u + o[7][1])],
                [o[8 + 1][0].min(u + o[8][0]), o[8 + 1][1].max(u + o[8][1])],
                [o[9 + 1][0].min(u + o[9][0]), o[9 + 1][1].max(u + o[9][1])],
                [o[10 + 1][0].min(u + o[10][0]), o[10 + 1][1].max(u + o[10][1])],
                [o[11 + 1][0].min(u + o[11][0]), o[11 + 1][1].max(u + o[11][1])],
                [o[12 + 1][0].min(u + o[12][0]), o[12 + 1][1].max(u + o[12][1])],
                [o[13 + 1][0].min(u + o[13][0]), o[13 + 1][1].max(u + o[13][1])],
                [o[14 + 1][0].min(u + o[14][0]), o[14 + 1][1].max(u + o[14][1])],
                [o[15 + 1][0].min(u + o[15][0]), o[15 + 1][1].max(u + o[15][1])],
            ];
            let af = n(aa, &Z, p, u, ab + 1, ac, ad);
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