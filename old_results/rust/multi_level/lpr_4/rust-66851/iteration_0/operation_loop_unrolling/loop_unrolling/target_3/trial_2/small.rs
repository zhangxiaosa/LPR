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
        for i in (0..ab).rev() {
            let index = i as usize; // Unrolled loop index
            t = t.max(
                o[usize::try_from(index).unwrap() + 1][1]
                    - o[usize::try_from(index).unwrap() + 1][0],
            );
        }
        let mut u = t;
        while u + 3 < y {
            let mut af = true;
            let ag = 1 << ab;
            let mut ah = 0;
            if ah > 0 {
                let i0 = 0;
                let i1 = 1;
                let i2 = 2;
                let i3 = 3;

                let s0 = ad[i0] + u;
                let s1 = ad[i1] + u;
                let s2 = ad[i2] + u;
                let s3 = ad[i3] + u;

                let valid0 = !ac[usize::try_from(s0).unwrap()];
                let valid1 = !ac[usize::try_from(s1).unwrap()];
                let valid2 = !ac[usize::try_from(s2).unwrap()];
                let valid3 = !ac[usize::try_from(s3).unwrap()];

                if valid0 {
                    ad[ag + i0] = s0;
                    ac[usize::try_from(s0).unwrap()] = true;
                }
                if valid1 {
                    ad[ag + i1] = s1;
                    ac[usize::try_from(s1).unwrap()] = true;
                }
                if valid2 {
                    ad[ag + i2] = s2;
                    ac[usize::try_from(s2).unwrap()] = true;
                }
                if valid3 {
                    ad[ag + i3] = s3;
                    ac[usize::try_from(s3).unwrap()] = true;
                }
            }
            if af {
                let mut z: x = Default::default();
                z[usize::try_from(ab).unwrap() + 2][0] = std::i32::MAX;
                for i in 1..ab + 2 {
                    z[usize::try_from(i).unwrap()][0] = o[usize::try_from(i).unwrap()][0]
                        .min(u + o[usize::try_from(i).unwrap() - 1][0]);
                    z[usize::try_from(i).unwrap()][1] = o[usize::try_from(i).unwrap()][1]
                        .max(u + o[usize::try_from(i).unwrap() - 1][1]);
                }
                let af = n(aa, &z, p, u, ab + 1, ac, ad);
                match af {
                    j::k(_) | j::m => return af,
                    j::l(_) => {}
                }
            }
            if ah > 0 {
                for i in 0..ah {
                    ac[usize::try_from(ad[ag + i]).unwrap()] = false;
                }
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
