use std\::convert\::TryFrom;

fn d() -> Option<u64> {
    const e: i32 = 7;
    const f: i32 = 1 << 12;
    const w: i32 = f;

    type g = [i32];
    type x = [[i32; 2]; 16];
    enum j {
        k(u64),
        l(i32),
        m,
    }

    fn n(aa: i32, o: &x, p: i32, q: i32, ab: i32, ac: &mut [bool], ad: &mut g) -> j {
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
        t = t.max(o[ab as usize + 1][1] - o[ab as usize + 1][0]);

        // Unrolled iteration 1
        t = t.max(o[(ab + 1) as usize + 1][1] - o[(ab + 1) as usize + 1][0]);

        // Unrolled iteration 2
        t = t.max(o[(ab + 2) as usize + 1][1] - o[(ab + 2) as usize + 1][0]);

        // Replace ab with the actual number of iterations in the unrolled section

        let mut u = t;
        while u < y {
            let mut af = true;
            let ag = 1 << ab;
            let mut ah = 0;

            for i in 0..ag {
                let s = ad[i] + u;
                if ac[s as usize] {
                    af = false;
                    break;
                }

                ad[ag + i] = s;
                ac[s as usize] = true;
                ah += 1;
            }

            if af {
                let mut z: x = Default::default();
                z[(ab + 2) as usize][0] = std::i32::MAX;

                for i in 1..(ab + 2) {
                    z[i as usize][0] = o[i as usize][0].min(u + o[(i - 1) as usize][0]);
                    z[i as usize][1] = o[i as usize][1].max(u + o[(i - 1) as usize][1]);
                }

                let af = n(aa, &z, p, u, ab + 1, ac, ad);
                match af {
                    j::k(_) | j::m => return af,
                    j::l(v) => {}
                }
            }

            for i in 0..ah {
                ac[ad[ag + i] as usize] = false;
            }

            u += 1;
        }

        j::l(p)
    }

    let mut ac = vec![false; w as usize];
    let mut ad = vec![0i32; 1 << e];
    let mut o: x = Default::default();
    o[1][0] = std::i32::MAX;

    match n(e, &o, f, f, 0, &mut ac, &mut ad) {
        j::k(s) => Some(s),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20_313_839_404_245));
}