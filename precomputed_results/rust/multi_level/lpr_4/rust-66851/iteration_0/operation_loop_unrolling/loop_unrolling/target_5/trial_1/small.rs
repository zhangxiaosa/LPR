use std::convert::TryFrom;

fn d() -> Option<u64> {
    const e: i32 = 7;
    const f: i32 = 1 << 12;
    const w: usize = f as usize;
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
                ae += &ad[1 << i].to_string();
            }
            return if let Ok(r) = ae.parse() {
                j::k(r)
            } else {
                j::m
            };
        }

        let mut t = 0;
        let y = q;
        // Unrolled loop bodies
        let index0 = ab as usize;
        t = t.max(o[index0 + 1][1] - o[index0 + 1][0]);
        let index1 = (ab - 1) as usize;
        t = t.max(o[index1 + 1][1] - o[index1 + 1][0]);
        let index2 = (ab - 2) as usize;
        t = t.max(o[index2 + 1][1] - o[index2 + 1][0]);
        let index3 = (ab - 3) as usize;
        t = t.max(o[index3 + 1][1] - o[index3 + 1][0]);

        let mut u = t;
        while u < y {
            let mut af = true;
            let ag = 1 << ab;
            let mut ah = 0;
            for i in 0..ag {
                let s = ad[i] + u;
                if ac[usize::try_from(s).unwrap()] {
                    af = false;
                    break;
                }
                ad[ag + i] = s;
                ac[usize::try_from(s).unwrap()] = true;
                ah += 1;
            }
            if af {
                let mut z: x = Default::default();
                z[usize::try_from(ab).unwrap() + 2][0] = std::i32::MAX;
                for i in 1..ab + 2 {
                    let index = i as usize;
                    z[index][0] = o[index][0].min(u + o[index - 1][0]);
                    z[index][1] = o[index][1].max(u + o[index - 1][1]);
                }
                let af = n(aa, &z, p, u, ab + 1, ac, ad);
                match af {
                    j::k(_) | j::m => return af,
                    j::l(v) => {}
                }
            }
            for i in 0..ah {
                ac[usize::try_from(ad[ag + i]).unwrap()] = false;
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