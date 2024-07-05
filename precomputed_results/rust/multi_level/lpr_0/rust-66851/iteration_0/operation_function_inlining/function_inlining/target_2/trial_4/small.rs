use std::convert::TryFrom;

macro_rules! a {
    ($b:expr, $c:ident) => {
        $c::try_from($b).unwrap()
    };
}

fn main() {
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
    fn main() {
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
        let aa = e;
        let p = f;
        let q = f;
        let ab = 0;
        let mut u = 0;
        let mut af = true;
        let ag = 1 << ab;
        let mut ah = 0;
        let mut t = 0;
        let y = q;
        for i in 0..ab {
            t = t.max(o[a! {i, usize} + 1][1] - o[a! {i, usize} + 1][0]);
        }
        while u < y {
            let ag = 1 << ab;
            let mut ah = 0;
            for i in 0..ag {
                let s = ad[i] + u;
                if ac[a! {s, usize}] {
                    af = false;
                    break;
                }
                ad[ag + i] = s;
                ac[a! {s, usize}] = true;
                ah += 1;
            }
            if af {
                let mut z: x = Default::default();
                z[a! {ab, usize}][0] = std::i32::MAX;
                for i in 1..ab + 2 {
                    z[a! {i, usize}][0] = o[a! {i, usize}][0].min(u + o[a! {i, usize} - 1][0]);
                    z[a! {i, usize}][1] = o[a! {i, usize}][1].max(u + o[a! {i, usize} - 1][1]);
                }
                let ae = ad[1 << ab..1 << ab + 1].iter().map(|i| i.to_string()).collect::<String>();
                let ae = ae.parse();
                if let Ok(r) = ae {
                    return Some(r);
                } else {
                    return None;
                }
            }
            for i in 0..ah {
                ac[a! {ad[ag + a! {i, usize}], usize}] = false;
            }
            u += 1;
        }
        return Some(p);
    }

    let mut ac = [false; w];
    let mut ad = [0i32; 1 << e];
    let mut o: x = Default::default();
    o[1][0] = std::i32::MAX;
    match main() {
        Some(s) => assert_eq!(s, Some(20_313_839_404_245)),
        None => panic!("Expected Some(20_313_839_404_245)"),
    }
}