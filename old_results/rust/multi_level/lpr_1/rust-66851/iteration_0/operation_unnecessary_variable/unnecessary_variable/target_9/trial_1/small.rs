use std::convert::TryFrom;

macro_rules! a {
    ($b:expr, $c:ident) => {
        $c::try_from($b).unwrap()
    };
}

fn d() -> Option<u64> {
    type j = [i32; 1 << 7];

    #[allow(non_snake_case)]
    fn n(
        aa: i32,
        p: i32,
        q: i32,
        ab: i32,
        ac: &mut [bool; 4096],
    ) -> std::option::Option<u64> {
        let mut ad: j = [0i32; 1 << 7];

        if ab == aa {
            let mut ae = String::new();
            for i in (0..ab).rev() {
                ae += &ad[1 << i].to_string();
            }
            return if let Ok(r) = ae.parse() {
                Some(r as u64)
            } else {
                None
            };
        }

        let mut t = 0;
        let y = q;

        // Loop unrolled section for (0..ab).rev()
        // Unrolled iteration 0
        t = t.max(a! {0, usize} + 1, 1 - a! {0, usize} + 1, 0);

        // Unrolled iteration 1
        t = t.max(a! {1, usize} + 1, 1 - a! {1, usize} + 1, 0);

        // Unrolled iteration 2
        t = t.max(a! {2, usize} + 1, 1 - a! {2, usize} + 1, 0);

        // Replace ab with the actual number of iterations in the unrolled section

        let mut u = t;
        while u < y {
            let mut af = true;
            let mut ah = 0;

            for i in 0..(1 << ab) {
                let s = ad[i] + u;
                if ac[a! {s, usize}] {
                    af = false;
                    break;
                }

                ad[(1 << ab) + i] = s;
                ac[a! {s, usize}] = true;
                ah += 1;
            }

            if af {
                let af = n(aa, p, u, ab + 1, ac);
                match af {
                    Some(_) | None => return af,
                }
            }

            for i in 0..ah {
                ac[a! {ad[(1 << ab) + a!{i, usize}], usize}] = false;
            }

            u += 1;
        }

        None
    }

    let mut ac = [false; 4096];

    match n(7, 4096, 4096, 0, &mut ac) {
        Some(s) => Some(s as u64),
        None => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20_313_839_404_245));
}