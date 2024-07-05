macro_rules! a {
    ($b:expr, $c:ident) => {
        $b
    };
}

fn d() -> Option<u64> {
    const f: i32 = 1 << 12;
    const w: usize = f as _;
    enum j {
        k(u64),
        l(i32),
        m,
    }

    fn n(aa: i32, o: &[[i32; 2]; 17], p: i32, q: i32, ab: i32, ac: &mut [bool; f as usize], ad: &mut [i32; 1 << f]) -> j {
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
        for i in 0..ab {
            t = t.max(o[a! {i, usize} + 1][1] - o[a! {i, usize} + 1][0]);
        }
        let mut u = t;
        while u < y {
            let mut af = true;
            let ag = 1 << ab;
            let mut ah = 0;
            for i in 0..ag {
                let s = ad[i] + u;
                if ac[a! {s, i32}] {
                    af = false;
                    break;
                }
                ad[ag + i] = s;
                ac[a! {s, i32}] = true;
                ah += 1;
            }
            if af {
                let af = n(aa, o, p, u, ab + 1, ac, ad);
                match af {
                    j::k(_) | j::m => return af,
                    j::l(v) => {}
                }
            }
            for i in 0..ah {
                ac[a! {ad[ag + a!{i, usize}], i32}] = false;
            }
            u += 1;
        }
        j::l(p)
    }

    let mut ac = [false; w];
    let mut ad = [0i32; 1 << f];
    let mut o = [[0; 2]; 17];
    o[1][0] = std::i32::MAX;

    match n(f, &o, f, f, 0, &mut ac, &mut ad) {
        j::k(s) => Some(s),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20_313_839_404_245));
}