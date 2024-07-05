use std::convert::TryFrom;

macro_rules! a {
    ($b:expr) => {
        u64::try_from($b).unwrap()
    };
}

fn d() -> Option<u64> {
    const e: i32 = 7;
    const f: i32 = 1 << 12;
    const w: usize = 4096;

    fn n(
        aa: i32,
        o: &[[i32; 2]],
        p: i32,
        q: i32,
        ab: i32,
        ac_decomposed: &mut [bool]
    ) -> j {
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
            t = t.max(o[a! {i} + 1][1] - o[a! {i} + 1][0]);
        }
        let mut u = t;
        while u < y {
            let mut af = true;
            let ag = 1 << ab;
            let mut ah = 0;
            for i in 0..ag {
                let s = ad[i] + u;
                if ac_decomposed[a! {s}] {
                    af = false;
                    break;
                }
                ad[ag + i] = s;
                ac_decomposed[a! {s}] = true;
                ah += 1;
            }
            if af {
                let mut z: [[i32; 2]; 16] = Default::default();
                z[a! {ab} + 2][0] = std::i32::MAX;
                for i in 1..ab + 2 {
                    z[a! {i}][0] = o[a! {i}][0].min(u + o[a! {i} - 1][0]);
                    z[a! {i}][1] = o[a! {i}][1].max(u + o[a! {i} - 1][1]);
                }
                let af = n(aa, &z, p, u, ab + 1, ac_decomposed);
                match af {
                    j::k(_) | j::m => return af,
                    _ => {}
                }
            }
            for i in 0..ah {
                ac_decomposed[a! {ad[ag + a!{i}] as usize}] = false;
            }
            u += 1;
        }
        j::l(p)
    }

    let mut ac_decomposed = [false; w];
    let mut o: [[i32; 2]; 16] = Default::default();

    o[1][0] = std::i32::MAX;

    match n(e, &o, f, f, 0, &mut ac_decomposed) {
        j::k(s) => Some(s),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(20_313_839_404_245));
}