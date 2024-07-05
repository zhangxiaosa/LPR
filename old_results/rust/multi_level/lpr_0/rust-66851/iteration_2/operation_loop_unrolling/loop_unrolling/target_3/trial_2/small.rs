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

    let mut v = u;
    let mut af1 = true;
    let mut af2 = true;
    let mut af3 = true;
    let mut af4 = true;

    let ag = 1 << ab;
    let mut ah = 0;

    while u + 3 < q {
        let s1 = ad[0] + u;
        let s2 = ad[1] + u;
        let s3 = ad[2] + u;
        let s4 = ad[3] + u;

        if ac[s1 as usize] || ac[s2 as usize] || ac[s3 as usize] || ac[s4 as usize] {
            af1 = false;
            af2 = false;
            af3 = false;
            af4 = false;
            break;
        }

        ad[ag] = s1;
        ad[ag + 1] = s2;
        ad[ag + 2] = s3;
        ad[ag + 3] = s4;

        ac[s1 as usize] = true;
        ac[s2 as usize] = true;
        ac[s3 as usize] = true;
        ac[s4 as usize] = true;

        ah += 4;
        u += 4;
        v += 4;
    }

    while u < v && u < q {
        let s = ad[0] + u;
        if ac[s as usize] {
            af1 = false;
            break;
        }
        ad[ag] = s;
        ac[s as usize] = true;
        ah += 1;
        u += 1;
    }

    if af1 || af2 || af3 || af4 {
        let mut z = [[0i32; 2]; 16];
        z[(ab + 2) as usize][0] = std::i32::MAX;
        for i in 1..=ab + 2 {
            z[i as usize][0] = o[i as usize][0].min(v + o[(i - 1) as usize][0]);
            z[i as usize][1] = o[i as usize][1].max(v + o[(i - 1) as usize][1]);
        }
        let af = n(aa, &z, p, v, ab + 1, ac, ad);
        match af {
            j::k(_) | j::m => return af,
            j::l(_) => {}
        }
    }

    for i in 0..ah {
        ac[ad[ag + i] as usize] = false;
    }

    u = v;

    j::l(p)
}