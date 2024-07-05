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
        for i in 0..ab {
            t = t.max(o[a! {i, usize} + 1][1] - o[a! {i, usize} + 1][0]);
        }
        let mut u = t;
        let mut af1 = true;
        let mut ah1 = 0;
        let mut af2 = true;
        let mut ah2 = 0;
        let mut af_final = false;
        let mut ah_final = 0;
        let ag = 1 << ab;
        while u < y {
            let s0 = ad[0] + u;
            if ac[a! {s0, usize}] {
                af_final = false;
                ah_final = ah1 + ah2;
                break;
            }
            ad[ag + 0] = s0;
            ac[a! {s0, usize}] = true;
            ah1 += 1;

            let s1 = ad[1] + u;
            if ac[a! {s1, usize}] {
                af_final = false;
                ah_final = ah1 + ah2;
                break;
            }
            ad[ag + 1] = s1;
            ac[a! {s1, usize}] = true;
            ah2 += 1;

            let s2 = ad[2] + u;
            if ac[a! {s2, usize}] {
                af_final = false;
                ah_final = ah1 + ah2;
                break;
            }
            ad[ag + 2] = s2;
            ac[a! {s2, usize}] = true;
            ah_final += 1;

            let mut z: x = Default::default();
            z[a! {ab, usize} + 2][0] = std::i32::MAX;
            for i in 1..ab + 2 {
                z[a! {i, usize}][0] = o[a! {i, usize}][0].min(u + o[a! {i, usize} - 1][0]);
                z[a! {i, usize}][1] = o[a! {i, usize}][1].max(u + o[a! {i, usize} - 1][1]);
            }
            let af = n(aa, &z, p, u, ab + 1, ac, ad);
            match af {
                j::k(_) | j::m => {
                    af_final = true;
                    ah_final = ah1 + ah2;
                    break;
                },
                j::l(v) => {}
            }
            for i in 0..ah1 {
                ac[a! {ad[ag + a!{i, usize}], usize}] = false;
            }
            ah1 = 0;

            for i in 0..ah2 {
                ac[a! {ad[ag + a!{i, usize}], usize}] = false;
            }
            ah2 = 0;
            u += 1;
        }
        if !af_final {
            for i in 0..ah_final {
                ac[a! {ad[ag + a!{i, usize}], usize}] = false;
            }
            return j::l(p);
        }
        j::k(p as u64)
    }
    let mut ac = [false; w];
    let mut ad = [0i32; 1 << e];
    let mut o: x = Default::default();
    o[1][0] = std::i32::MAX;
    match n(e, &o, f, f, 0, &mut ac, &mut ad) {
        j::k(s) => Some(s),
        l => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20_313_839_404_245));
}