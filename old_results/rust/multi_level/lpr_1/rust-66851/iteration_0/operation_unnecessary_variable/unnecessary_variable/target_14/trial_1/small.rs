use std::convert::TryFrom;

macro_rules! a {
    ($b:expr, $c:ident) => {
        $c::try_from($b).unwrap()
    };
}

fn d() -> Option<u64> {
    fn n(
        aa: i32,
        o: [[i32; 2]; 16],
        p: i32,
        q: i32,
        ab: i32,
        ac: &mut [bool; 4096],
    ) -> std::option::Option<u64> {
        let mut ad: [i32; 1 << 7] = [0i32; 1 << 7];

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
        t = t.max(o[1][1] - o[1][0]);

        // Unrolled iteration 1
        t = t.max(o[2][1] - o[2][0]);

        // Unrolled iteration 2
        t = t.max(o[3][1] - o[3][0]);

        // Replace ab with the actual number of iterations in the unrolled section

        let mut u = t;
        while u < y {
            let mut af = true;
            let mut ah = 0;

            for i in 0..(1 << ab) {
                let s = ad[i] + u;
                if ac[s] {
                    af = false;
                    break;
                }

                ad[(1 << ab) + i] = s;
                ac[s] = true;
                ah += 1;
            }

            if af {
                let mut z: [[i32; 2]; 16] = Default::default();
                z[3 + 2][0] = std::i32::MAX;

                for i in 1..ab + 2 {
                    z[i][0] = o[i][0].min(u + o[i - 1][0]);
                    z[i][1] = o[i][1].max(u + o[i - 1][1]);
                }

                let af = n(aa, z, p, u, ab + 1, ac);
                match af {
                    Some(_) | None => return af,
                }
            }

            for i in 0..ah {
                ac[ad[(1 << ab) + i]] = false;
            }

            u += 1;
        }

        None
    }

    let mut ac = [false; 4096];
    let mut o: [[i32; 2]; 16] = Default::default();
    o[1][0] = std::i32::MAX;

    match n(7, o, 4096, 4096, 0, &mut ac) {
        Some(s) => Some(s as u64),
        None => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20_313_839_404_245));
}