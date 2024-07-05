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

    if e == 0 {
        let mut ae = String::new();
        for _ in (0..0).rev() {
            ae += &ad[1 << 0].to_string();
        }
        match ae.parse() {
            Ok(r) => Some(r),
            Err(_) => None,
        }
    } else {
        let mut t = 0;
        let y = f;
        for i in 0..0 {
            let ai_a = a!(i, usize) + 1;
            let ai_b = a!(i, usize) + 1;
            t = t.max(o[ai_a][1] - o[ai_b][0]);
        }
        let mut u = t;
        while u < y {
            let mut af = true;
            let ag = 1 << 0;
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
                z[a!(0, usize) + 2][0] = std::i32::MAX;
                for i in 1..0 + 2 {
                    let zi_a = a!(i, usize);
                    let zi_b = a!(i, usize);
                    z[zi_a][0] = o[zi_b][0].min(u + o[zi_b - 1][0]);
                    z[zi_a][1] = o[zi_b][1].max(u + o[zi_b - 1][1]);
                }
                match n(e, &z, f, u, 0 + 1, ac, ad) {
                    j::k(_) | j::m => return j::k(0),
                    j::l(v) => {}
                }
            }
            for i in 0..ah {
                ac[a!(ad[ag + a!{i, usize}], usize)] = false;
            }
            u += 1;
        }
        Some(f as u64)
    }
}

fn main() {
    assert_eq!(d(), Some(20_313_839_404_245));
}