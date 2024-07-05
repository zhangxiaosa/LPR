fn main() {
    const f: i32 = 1 << 12;
    let mut ac: [bool; f as usize] = [false; f as usize];
    let mut ad: [i32; 128] = [0; 128];
    let mut o: [[i32; 2]; 16] = [[0; 2]; 16];
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
        let mut ae: String = String::new();
        for i in (0..ab).rev() {
            ae += &ad[1 << i].to_string();
        }
        return if let Ok(r) = ae.parse::<u64>() {
            j::k(r)
        } else {
            j::m
        };
    }
    let mut t: i32 = 0;
    t = t.max(o[2 + 1][1] - o[2 + 1][0]);
    let mut u: i32 = t;
    while u < q {
        let mut af: bool = true;
        let ag: i32 = 1 << ab;
        let mut ah: i32 = 0;
        for i in (0..ag) {
            let s: i32 = ad[i] + u;
            if ac[s as usize] {
                af = false;
                break;
            }
            ad[ag + i] = s;
            ac[s as usize] = true;
            ah += 1;
        }
        if af {
            let mut z: [[i32; 2]; 16] = [[0; 2]; 16];
            z[ab as usize + 2][0] = std::i32::MAX;
            for i in (1..ab + 2) {
                z[i as usize][0] = o[i as usize][0].min(u + o[i as usize - 1][0]);
                z[i as usize][1] = o[i as usize][1].max(u + o[i as usize - 1][1]);
            }
            let af: j = n(aa, &z, p, u, ab + 1, ac, ad);
            match af {
                j::k(_) | j::m => return af,
                j::l(_) => {}
            }
        }
        for i in (0..ah) {
            ac[ad[ag + i] as usize] = false;
        }
        u += 1;
    }
    j::l(p)
}