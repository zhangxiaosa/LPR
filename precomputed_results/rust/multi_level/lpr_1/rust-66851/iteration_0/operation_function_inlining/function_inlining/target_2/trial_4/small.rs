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

    let mut ac = [false; w];
    let mut ad = [0i32; 1 << e];
    let mut o: x = Default::default();
    o[1][0] = std::i32::MAX;

    let mut result = None;
    let mut stack = vec![(0, e, &o, f, f) /* parameters for initial call */];

    while let Some((level, aa, o, p, q)) = stack.pop() {
        if level == aa {
            let mut ae = String::new();
            for i in (0..aa).rev() {
                ae += &ad[1 << i].to_string();
            }
            if let Ok(r) = ae.parse() {
                result = Some(r);
                break;
            } else {
                continue;
            }
        }

        let mut t = 0;
        let y = q;
        for i in 0..level {
            t = t.max(o[a!(i, usize) + 1][1] - o[a!(i, usize) + 1][0]);
        }
        let mut u = t;
        while u < y {
            let mut af = true;
            let ag = 1 << level;
            let mut ah = 0;
            for i in 0..ag {
                let s = ad[i] + u;
                if ac[a!(s, usize)] {
                    af = false;
                    break;
                }
                ad[ag + i] = s;
                ac[a!(s, usize)] = true;
                ah += 1;
            }

            if af {
                let mut z: x = Default::default();
                z[a!(level, usize) + 2][0] = std::i32::MAX;
                for i in 1..level + 2 {
                    z[a!(i, usize)][0] = o[a!(i, usize)][0].min(u + o[a!(i, usize) - 1][0]);
                    z[a!(i, usize)][1] = o[a!(i, usize)][1].max(u + o[a!(i, usize) - 1][1]);
                }
                stack.push((level + 1, aa, &z, p, u));
            }

            for i in 0..ah {
                ac[a!(ad[ag + a!(i, usize)], usize)] = false;
            }
            u += 1;
        }
    }

    match result {
        Some(s) => Some(s),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20_313_839_404_245));
}
