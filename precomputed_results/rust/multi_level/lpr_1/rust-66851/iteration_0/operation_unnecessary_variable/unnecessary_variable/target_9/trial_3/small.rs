use std::convert::TryFrom;

macro_rules! a {
    ($b:expr, $c:ident) => {
        $c::try_from($b).unwrap()
    };
}

fn d() -> Option<u64> {
    type j = [i32; 1 << 7];
    type x = [[i32; 2]; 16];

    fn n(
        aa: i32,
        o: &x,
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

        let mut u = t;
        while u < y {
            let mut af = true;
            let mut ah = 0;

            for i in 0..(1 << 3) {
                let s = ad[i] + u;
                if ac[a! {s, usize}] {
                    af = false;
                    break;
                }

                ad[(1 << 3) + i] = s;
                ac[a! {s, usize}] = true;
                ah += 1;
            }

            if af {
                let mut z: x = Default::default();
                z[a! {ab, usize} + 2][0] = std::i32::MAX;

                for i in 1..ab + 2 {
                    z[a! {i, usize}][0] = o[a! {i, usize}][0].min(u + o[a! {i, usize} - 1][0]);
                    z[a! {i, usize}][1] = o[a! {i, usize}][1].max(u + o[a! {i, usize} - 1][1]);
                }

                let af = n(aa, &z, p, u, ab + 1, ac);
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
    const DEFAULT_O: x = Default::default();

    match n(7, &DEFAULT_O, 4096, 4096, 0, &mut ac) {
        Some(s) => Some(s as u64),
        None => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20_313_839_404_245));
}