fn main() {
    const e: i32 = 7;
    const f: i32 = 1 << 12;
    const w: usize = (1 << 12) as usize;
    type g = [i32];
    type h = [bool];
    type x = [[i32; 2]; 16];
    enum j { k(u64), l(i32), m, }
    macro_rules! a {
        ($b:expr, $c:ident) => {
            $c::try_from($b).unwrap()
        };
    }

    let mut ac = [false; w];
    let mut ad = [0i32; 1 << e];
    let mut o: x = Default::default();
    o[1][0] = std::i32::MAX;

    fn n(aa: i32, o: &x, p: i32, q: i32, ab: i32, ac: &mut h, ad: &mut g) -> j {
        let mut ae = String::new();
        for i in (0..ab).rev() {
            ae += &ad[1 << i].to_string();
        }
        if let Ok(r) = ae.parse() {
            return j::k(r);
        } else {
            return j::m;
        }
    }

    let mut t = 0;
    let y = f;
    for i in 0..e {
        t = t.max(o[usize::try_from(i).unwrap() + 1][1] - o[usize::try_from(i).unwrap() + 1][0]);
    }

    let mut u = t;
    while u < y {
        let mut af = true;
        let ag = 1 << e;
        let mut ah = 0;
        for i in 0..ag {
            let s = ad[i] + u;
            if ac[s] {
                af = false;
                break;
            }
            ad[ag + i] = s;
            ac[s] = true;
            ah += 1;
        }

        if af {
            let mut z: x = Default::default();
            z[usize::try_from(e).unwrap() + 2][0] = std::i32::MAX;
            for i in 1..e + 2 {
                z[usize::try_from(i).unwrap()][0] = o[usize::try_from(i).unwrap()][0].min(u + o[usize::try_from(i).unwrap() - 1][0]);
                z[usize::try_from(i).unwrap()][1] = o[usize::try_from(i).unwrap()][1].max(u + o[usize::try_from(i).unwrap() - 1][1]);
            }
            let af = n(e, &z, f, u, e + 1, &mut ac, &mut ad);
            match af {
                j::k(_) | j::m => return af,
                j::l(v) => {}
            }
        }
        for i in 0..ah {
            ac[ad[ag + usize::try_from(i).unwrap()]] = false;
        }
        u += 1;
    }

    return j::l(f);
}

fn main() {
    assert_eq!(main(), Some(20_313_839_404_245));
}