use std::convert::TryFrom;

fn d() -> Option<u64> {
    const e: i32 = 7;
    const f: i32 = 1 << 12;
    const w: usize = f as _;
    type g = [i32];
    type h = [bool];
    type x = [[i32; 2]; 16];

    enum j {
        k(u64),
        l(i32),
        m,
    }

    fn n(aa: i32, o: &x, p: i32, q: i32, ab: i32, ac: &mut h, ad: &mut g) -> j {
        if ab == aa {
            let mut ae = String::new();
            for i in (0..ab).rev() {
                ae += &ad[TryFrom::<usize>::try_from(i).unwrap() + 1].to_string();
            }
            return if let Ok(r) = ae.parse() {
                j::k(r)
            } else {
                j::m
            };
        }
        let mut t = 0;
        let y = q;
        for i in 0..ab {
            t = t.max(o[TryFrom::<usize>::try_from(i).unwrap() + 1][1] - o[TryFrom::<usize>::try_from(i).unwrap() + 1][0]);
        }
        let mut u = t;
        while u < y {
            let mut af = true;
            let ag = 1 << ab;
            let mut ah = 0;
            for i in 0..ag {
                let s = ad[i] + u;
                if ac[TryFrom::<usize>::try_from(s).unwrap()] {
                    af = false;
                    break;
                }
                ad[ag + i] = s;
                ac[TryFrom::<usize>::try_from(s).unwrap()] = true;
                ah += 1;
            }
            if af {
                let mut z: x = Default::default();
                z[TryFrom::<usize>::try_from(ab).unwrap() + 2][0] = std::i32::MAX;
                for i in 1..ab + 2 {
                    z[TryFrom::<usize>::try_from(i).unwrap()][0] = o[TryFrom::<usize>::try_from(i).unwrap()][0].min(u + o[TryFrom::<usize>::try_from(i).unwrap() - 1][0]);
                    z[TryFrom::<usize>::try_from(i).unwrap()][1] = o[TryFrom::<usize>::try_from(i).unwrap()][1].max(u + o[TryFrom::<usize>::try_from(i).unwrap() - 1][1]);
                }
                let af = n(aa, &z, p, u, ab + 1, ac, ad);
                match af {
                    j::k(_) | j::m => return af,
                    j::l(v) => {}
                }
            }
            for i in 0..ah {
                ac[TryFrom::<usize>::try_from(ad[ag + TryFrom::<usize>::try_from(i).unwrap()]).unwrap()] = false;
            }
            u += 1;
        }
        j::l(p)
    }

    let mut ac = [false; w];
    let mut ad = [0i32; 1 << e];
    let mut o: x = Default::default();
    o[1][0] = std::i32::MAX;

    match n(e, &o, f, f, 0, &mut ac, &mut ad) {
        j::k(s) => Some(s),
        l => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20_313_839_404_245));
}