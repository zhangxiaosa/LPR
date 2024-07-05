use std::convert::TryFrom;
macro_rules! a {
    ($b:expr, $c:ident) => {
        $c::try_from($b).unwrap()
    };
}
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
        t = t.max(o[a! {0, usize} + 1][1] - o[a! {0, usize} + 1][0]);
        t = t.max(o[a! {1, usize} + 1][1] - o[a! {1, usize} + 1][0]);
        t = t.max(o[a! {2, usize} + 1][1] - o[a! {2, usize} + 1][0]);
        t = t.max(o[a! {3, usize} + 1][1] - o[a! {3, usize} + 1][0]);
        t = t.max(o[a! {4, usize} + 1][1] - o[a! {4, usize} + 1][0]);
        t = t.max(o[a! {5, usize} + 1][1] - o[a! {5, usize} + 1][0]);
        t = t.max(o[a! {6, usize} + 1][1] - o[a! {6, usize} + 1][0]);
        t = t.max(o[a! {7, usize} + 1][1] - o[a! {7, usize} + 1][0]);
        t = t.max(o[a! {8, usize} + 1][1] - o[a! {8, usize} + 1][0]);
        t = t.max(o[a! {9, usize} + 1][1] - o[a! {9, usize} + 1][0]);
        t = t.max(o[a! {10, usize} + 1][1] - o[a! {10, usize} + 1][0]);
        t = t.max(o[a! {11, usize} + 1][1] - o[a! {11, usize} + 1][0]);
        t = t.max(o[a! {12, usize} + 1][1] - o[a! {12, usize} + 1][0]);
        t = t.max(o[a! {13, usize} + 1][1] - o[a! {13, usize} + 1][0]);
        t = t.max(o[a! {14, usize} + 1][1] - o[a! {14, usize} + 1][0]);
        t = t.max(o[a! {15, usize} + 1][1] - o[a! {15, usize} + 1][0]);
        let mut u = t;
        while u < y {
            let mut af = true;
            let ag = 1 << ab;
            let mut ah = 0;
            let s = ad[0] + u;
            if ac[a! {s, usize}] {
                af = false;
            }
            ad[ag + 0] = s;
            ac[a! {s, usize}] = true;
            ah += 1;
            let s = ad[1] + u;
            if ac[a! {s, usize}] {
                af = false;
            }
            ad[ag + 1] = s;
            ac[a! {s, usize}] = true;
            ah += 1;
            let s = ad[2] + u;
            if ac[a! {s, usize}] {
                af = false;
            }
            ad[ag + 2] = s;
            ac[a! {s, usize}] = true;
            ah += 1;
            let s = ad[3] + u;
            if ac[a! {s, usize}] {
                af = false;
            }
            ad[ag + 3] = s;
            ac[a! {s, usize}] = true;
            ah += 1;
            let s = ad[4] + u;
            if ac[a! {s, usize}] {
                af = false;
            }
            ad[ag + 4] = s;
            ac[a! {s, usize}] = true;
            ah += 1;
            let s = ad[5] + u;
            if ac[a! {s, usize}] {
                af = false;
            }
            ad[ag + 5] = s;
            ac[a! {s, usize}] = true;
            ah += 1;
            let s = ad[6] + u;
            if ac[a! {s, usize}] {
                af = false;
            }
            ad[ag + 6] = s;
            ac[a! {s, usize}] = true;
            ah += 1;
            let s = ad[7] + u;
            if ac[a! {s, usize}] {
                af = false;
            }
            ad[ag + 7] = s;
            ac[a! {s, usize}] = true;
            ah += 1;
            let s = ad[8] + u;
            if ac[a! {s, usize}] {
                af = false;
            }
            ad[ag + 8] = s;
            ac[a! {s, usize}] = true;
            ah += 1;
            let s = ad[9] + u;
            if ac[a! {s, usize}] {
                af = false;
            }
            ad[ag + 9] = s;
            ac[a! {s, usize}] = true;
            ah += 1;
            let s = ad[10] + u;
            if ac[a! {s, usize}] {
                af = false;
            }
            ad[ag + 10] = s;
            ac[a! {s, usize}] = true;
            ah += 1;
            let s = ad[11] + u;
            if ac[a! {s, usize}] {
                af = false;
            }
            ad[ag + 11] = s;
            ac[a! {s, usize}] = true;
            ah += 1;
            let s = ad[12] + u;
            if ac[a! {s, usize}] {
                af = false;
            }
            ad[ag + 12] = s;
            ac[a! {s, usize}] = true;
            ah += 1;
            let s = ad[13] + u;
            if ac[a! {s, usize}] {
                af = false;
            }
            ad[ag + 13] = s;
            ac[a! {s, usize}] = true;
            ah += 1;
            let s = ad[14] + u;
            if ac[a! {s, usize}] {
                af = false;
            }
            ad[ag + 14] = s;
            ac[a! {s, usize}] = true;
            ah += 1;
            let s = ad[15] + u;
            if ac[a! {s, usize}] {
                af = false;
            }
            ad[ag + 15] = s;
            ac[a! {s, usize}] = true;
            ah += 1;
            if af {
                let mut z: x = Default::default();
                z[a! {ab, usize} + 2][0] = std::i32::MAX;
                for i in 1..ab + 2 {
                    z[a! {i, usize}][0] = o[a! {i, usize}][0].min(u + o[a! {i, usize} - 1][0]);
                    z[a! {i, usize}][1] = o[a! {i, usize}][1].max(u + o[a! {i, usize} - 1][1]);
                }
                let af = n(aa, &z, p, u, ab + 1, ac, ad);
                match af {
                    j::k(_) | j::m => return af,
                    j::l(v) => {}
                }
            }
            for i in 0..ah {
                ac[a! {ad[ag + a!{i, usize}], usize}] = false;
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