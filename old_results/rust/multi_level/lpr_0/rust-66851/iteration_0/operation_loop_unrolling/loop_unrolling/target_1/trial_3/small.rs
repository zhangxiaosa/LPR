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

        // Unrolled loop with 4 repetitions for ab == 4
        t = t.max(o[a! {3, usize} + 1][1] - o[a! {3, usize} + 1][0]);
        t = t.max(o[a! {2, usize} + 1][1] - o[a! {2, usize} + 1][0]);
        t = t.max(o[a! {1, usize} + 1][1] - o[a! {1, usize} + 1][0]);
        t = t.max(o[a! {0, usize} + 1][1] - o[a! {0, usize} + 1][0]);

        let mut u = t;

        // Unrolled loop with 4 repetitions for ab == 4
        {
            // Unrolled iteration 1
            let s = ad[0] + u;
            if ac[a! {s, usize}] {
                af = false;
                break;
            }
            ad[ag + 0] = s;
            ac[a! {s, usize}] = true;
            ah += 1;

            // Unrolled iteration 2
            let s = ad[1] + u;
            if ac[a! {s, usize}] {
                af = false;
                break;
            }
            ad[ag + 1] = s;
            ac[a! {s, usize}] = true;
            ah += 1;

            // Unrolled iteration 3
            let s = ad[2] + u;
            if ac[a! {s, usize}] {
                af = false;
                break;
            }
            ad[ag + 2] = s;
            ac[a! {s, usize}] = true;
            ah += 1;

            // Unrolled iteration 4
            let s = ad[3] + u;
            if ac[a! {s, usize}] {
                af = false;
                break;
            }
            ad[ag + 3] = s;
            ac[a! {s, usize}] = true;
            ah += 1;
        }

        // Remaining code...
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