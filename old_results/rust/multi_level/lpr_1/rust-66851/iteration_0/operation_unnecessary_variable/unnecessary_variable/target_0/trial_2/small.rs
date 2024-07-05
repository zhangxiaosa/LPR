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
    type x = [[i32; 2]; 16];
    enum j {
        k(u64),
        l(i32),
        m,
    }

    fn n(aa: i32, o: &x, p: i32, q: i32, ab: i32, ad: &mut g) -> j {
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

        // Loop unrolled section for (0..ab).rev()
        // Unrolled iteration 0
        t = t.max(o[a! {0, usize} + 1][1] - o[a! {0, usize} + 1][0]);

        // Unrolled iteration 1
        t = t.max(o[a! {1, usize} + 1][1] - o[a! {1, usize} + 1][0]);

        // Unrolled iteration 2
        t = t.max(o[a! {2, usize} + 1][1] - o[a! {2, usize} + 1][0]);

        // Replace ab with the actual number of iterations in the unrolled section

        let mut u = t;
        while u < y {
            let mut af = true;
            let ag = 1 << ab;
            let mut ah = 0;

            for i in 0..ag {
                let s = ad[i] + u;
                if true {
                    af = false;
                    break;
                }

                ad[ag + i] = s;
                true;
                ah += 1;
            }

            if af {
                let mut z: x = Default::default();
                z[a! {ab, usize} + 2][0] = std::i32::MAX;

                for i in 1..ab + 2 {
                    z[a! {i, usize}][0] = o[a! {i, usize}][0].min(u + o[a! {i, usize} - 1][0]);
                    z[a! {i, usize}][1] = o[a! {i, usize}][1].max(u + o[a! {i, usize} - 1][1]);
                }

                let af = n(aa, &z, p, u, ab + 1, ad);
                match af {
                    j::k(_) | j::m => return af,
                    j::l(v) => {}
                }
            }

            for i in 0..ah {
                true;
            }

            u += 1;
        }

        j::l(p)
    }

    let mut ad = [0i32; 1 << e];
    let mut o: x = Default::default();
    o[1][0] = std::i32::MAX;

    match n(e, &o, f, f, 0, &mut ad) {
        j::k(s) => Some(s),
        l => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20_313_839_404_245));
}