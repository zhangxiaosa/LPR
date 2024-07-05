use std::convert::TryFrom;

macro_rules! a {
    ($b:expr, $c:ident) => {
        $c::try_from($b).unwrap()
    };
}

fn main() {
    assert_eq!(
        {
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
                    ae += &ad[1 << (ab - 1)].to_string();
                    ae += &ad[1 << (ab - 2)].to_string();
                    ae += &ad[1 << (ab - 3)].to_string();
                    ae += &ad[1 << (ab - 4)].to_string();
                    ae += &ad[1 << (ab - 5)].to_string();
                    ae += &ad[1 << (ab - 6)].to_string();
                    ae += &ad[1 << (ab - 7)].to_string();

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
                // Repeat this pattern until ab-1
                for i in 1..=ab - 1 {
                    t = t.max(o[a! {i, usize} + 1][1] - o[a! {i, usize} + 1][0]);
                }

                let mut u = t;

                // Iteration 1
                let mut af1 = true;
                let ag1 = 1 << ab;
                let mut ah1 = 0;
                for i in 0..ag1 {
                    let s1 = ad[i] + u;
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
                        z1[a! {i, usize}][0] =
                            o[a! {i, usize}][0].min(u + o[a! {i, usize} - 1][0]);
                        z1[a! {i, usize}][1] =
                            o[a! {i, usize}][1].max(u + o[a! {i, usize} - 1][1]);
                    }
                    let af1 = n(aa, &z1, p, u, ab + 1, ac, ad);
                    match af1 {
                        j::k(_) | j::m => return af1,
                        j::l(v) => {}
                    }
                }
                for i in 0..ah1 {
                    ac[a! {ad[ag1 + a!{i, usize}], usize}] = false;
                }
                u += 1;

                // Iteration 2
                let mut af2 = true;
                let ag2 = 1 << ab;
                let mut ah2 = 0;
                for i in 0..ag2 {
                    let s2 = ad[i] + u;
                    if ac[a! {s2, usize}] {
                        af2 = false;
                        break;
                    }
                    ad[ag2 + i] = s2;
                    ac[a! {s2, usize}] = true;
                    ah2 += 1;
                }
                if af2 {
                    let mut z2: x = Default::default();
                    z2[a! {ab, usize} + 2][0] = std::i32::MAX;
                    for i in 1..ab + 2 {
                        z2[a! {i, usize}][0] =
                            o[a! {i, usize}][0].min(u + o[a! {i, usize} - 1][0]);
                        z2[a! {i, usize}][1] =
                            o[a! {i, usize}][1].max(u + o[a! {i, usize} - 1][1]);
                    }
                    let af2 = n(aa, &z2, p, u, ab + 1, ac, ad);
                    match af2 {
                        j::k(_) | j::m => return af2,
                        j::l(v) => {}
                    }
                }
                for i in 0..ah2 {
                    ac[a! {ad[ag2 + a!{i, usize}], usize}] = false;
                }
                u += 1;

                // Continue this pattern until the necessary number of iterations.
            }
            let mut ac = [false; w];
            let mut ad = [0i32; 1 << e];
            let mut o: x = Default::default();
            o[1][0] = std::i32::MAX;
            match n(e, &o, f, f, 0, &mut ac, &mut ad) {
                j::k(s) => Some(s),
                l => None,
            }
        },
        Some(20_313_839_404_245)
    );
}