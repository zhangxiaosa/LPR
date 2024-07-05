use std::convert::TryFrom;

macro_rules! a {
    ($b:expr, $c:ident) => {
        $c::try_from($b).unwrap()
    };
}

fn main() {
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

        t = t.max(o[a! {7, usize} + 1][1] - o[a! {7, usize} + 1][0]);
        t = t.max(o[a! {6, usize} + 1][1] - o[a! {6, usize} + 1][0]);
        t = t.max(o[a! {5, usize} + 1][1] - o[a! {5, usize} + 1][0]);
        t = t.max(o[a! {4, usize} + 1][1] - o[a! {4, usize} + 1][0]);
        t = t.max(o[a! {3, usize} + 1][1] - o[a! {3, usize} + 1][0]);
        t = t.max(o[a! {2, usize} + 1][1] - o[a! {2, usize} + 1][0]);
        t = t.max(o[a! {1, usize} + 1][1] - o[a! {1, usize} + 1][0]);
        t = t.max(o[a! {0, usize} + 1][1] - o[a! {0, usize} + 1][0]);

        t = t.max(o[a! {8, usize} + 1][1] - o[a! {8, usize} + 1][0]);

        let mut u0 = t;

        // First unrolled iteration
        let mut af0 = true;
        let ag0 = 1 << ab;
        let mut ah0 = 0;

        for i in 0..ag0 {
            let s0 = ad[i] + u0;

            if ac[a! {s0, usize}] {
                af0 = false;
                break;
            }

            ad[ag0 + i] = s0;
            ac[a! {s0, usize}] = true;
            ah0 += 1;
        }

        if af0 {
            let mut z0: x = Default::default();
            z0[a! {ab, usize} + 2][0] = std::i32::MAX;

            for i in 1..ab + 2 {
                z0[a! {i, usize}][0] = o[a! {i, usize}][0].min(u0 + o[a! {i, usize} - 1][0]);
                z0[a! {i, usize}][1] = o[a! {i, usize}][1].max(u0 + o[a! {i, usize} - 1][1]);
            }

            let af = n(aa, &z0, p, u0, ab + 1, ac, ad);

            match af {
                j::k(_) | j::m => return af,
                j::l(v) => {}
            }
        }

        for i in 0..ah0 {
            ac[a! {ad[ag0 + a!{i, usize}], usize}] = false;
        }

        // Second unrolled iteration
        let mut u1 = u0 + 1;
        let mut af1 = true;
        let ag1 = 1 << ab;
        let mut ah1 = 0;

        for i in 0..ag1 {
            let s1 = ad[i] + u1;

            if ac[a! {s1, usize}] {
                af1 = false;
                break;
            }

            ad[ag1 + i] = s1;
            ac[a! {s1, usize}] = true;
            ah1 += 1;
        }

        if af1 {
            let mut z1: x = Default::default();
            z1[a! {ab, usize} + 2][0] = std::i32::MAX;

            for i in 1..ab + 2 {
                z1[a! {i, usize}][0] = o[a! {i, usize}][0].min(u1 + o[a! {i, usize} - 1][0]);
                z1[a! {i, usize}][1] = o[a! {i, usize}][1].max(u1 + o[a! {i, usize} - 1][1]);
            }

            let af = n(aa, &z1, p, u1, ab + 1, ac, ad);

            match af {
                j::k(_) | j::m => return af,
                j::l(v) => {}
            }
        }

        for i in 0..ah1 {
            ac[a! {ad[ag1 + a!{i, usize}], usize}] = false;
        }

        // End of unrolled iterations

        j::l(p)
    }

    let mut ac = [false; w];
    let mut ad = [0i32; 1 << e];
    let mut o: x = Default::default();
    o[1][0] = std::i32::MAX;

    match n(e, &o, f, f, 0, &mut ac, &mut ad) {
        j::k(s) => assert_eq!(Some(s), Some(20_313_839_404_245)),
        _ => panic!(),
    }
}