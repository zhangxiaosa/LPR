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
        let af_0 = true;
        let ag_0 = 1 << ab;
        let mut ah_0 = 0;
        let s_0 = ad[0] + u;
        let af_1 = true;
        let ag_1 = 1 << ab;
        let mut ah_1 = 0;
        let s_1 = ad[1] + u;
        let af_2 = true;
        let ag_2 = 1 << ab;
        let mut ah_2 = 0;
        let s_2 = ad[2] + u;
        let af_3 = true;
        let ag_3 = 1 << ab;
        let mut ah_3 = 0;
        let s_3 = ad[3] + u;
        let af_4 = true;
        let ag_4 = 1 << ab;
        let mut ah_4 = 0;
        let s_4 = ad[4] + u;
        let af_5 = true;
        let ag_5 = 1 << ab;
        let mut ah_5 = 0;
        let s_5 = ad[5] + u;
        let af_6 = true;
        let ag_6 = 1 << ab;
        let mut ah_6 = 0;
        let s_6 = ad[6] + u;
        let af_7 = true;
        let ag_7 = 1 << ab;
        let mut ah_7 = 0;
        let s_7 = ad[7] + u;
        let af_8 = true;
        let ag_8 = 1 << ab;
        let mut ah_8 = 0;
        let s_8 = ad[8] + u;
        let af_9 = true;
        let ag_9 = 1 << ab;
        let mut ah_9 = 0;
        let s_9 = ad[9] + u;
        let af_10 = true;
        let ag_10 = 1 << ab;
        let mut ah_10 = 0;
        let s_10 = ad[10] + u;
        let af_11 = true;
        let ag_11 = 1 << ab;
        let mut ah_11 = 0;
        let s_11 = ad[11] + u;
        let af_12 = true;
        let ag_12 = 1 << ab;
        let mut ah_12 = 0;
        let s_12 = ad[12] + u;
        let af_13 = true;
        let ag_13 = 1 << ab;
        let mut ah_13 = 0;
        let s_13 = ad[13] + u;
        let af_14 = true;
        let ag_14 = 1 << ab;
        let mut ah_14 = 0;
        let s_14 = ad[14] + u;
        let af_15 = true;
        let ag_15 = 1 << ab;
        let mut ah_15 = 0;
        let s_15 = ad[15] + u;
        if ac[a! {s_0, usize}] {
            af_0 = false;
        } else {
            ad[ag_0 + 0] = s_0;
            ac[a! {s_0, usize}] = true;
            ah_0 += 1;
        }
        if ac[a! {s_1, usize}] {
            af_1 = false;
        } else {
            ad[ag_1 + 1] = s_1;
            ac[a! {s_1, usize}] = true;
            ah_1 += 1;
        }
        if ac[a! {s_2, usize}] {
            af_2 = false;
        } else {
            ad[ag_2 + 2] = s_2;
            ac[a! {s_2, usize}] = true;
            ah_2 += 1;
        }
        if ac[a! {s_3, usize}] {
            af_3 = false;
        } else {
            ad[ag_3 + 3] = s_3;
            ac[a! {s_3, usize}] = true;
            ah_3 += 1;
        }
        if ac[a! {s_4, usize}] {
            af_4 = false;
        } else {
            ad[ag_4 + 4] = s_4;
            ac[a! {s_4, usize}] = true;
            ah_4 += 1;
        }
        if ac[a! {s_5, usize}] {
            af_5 = false;
        } else {
            ad[ag_5 + 5] = s_5;
            ac[a! {s_5, usize}] = true;
            ah_5 += 1;
        }
        if ac[a! {s_6, usize}] {
            af_6 = false;
        } else {
            ad[ag_6 + 6] = s_6;
            ac[a! {s_6, usize}] = true;
            ah_6 += 1;
        }
        if ac[a! {s_7, usize}] {
            af_7 = false;
        } else {
            ad[ag_7 + 7] = s_7;
            ac[a! {s_7, usize}] = true;
            ah_7 += 1;
        }
        if ac[a! {s_8, usize}] {
            af_8 = false;
        } else {
            ad[ag_8 + 8] = s_8;
            ac[a! {s_8, usize}] = true;
            ah_8 += 1;
        }
        if ac[a! {s_9, usize}] {
            af_9 = false;
        } else {
            ad[ag_9 + 9] = s_9;
            ac[a! {s_9, usize}] = true;
            ah_9 += 1;
        }
        if ac[a! {s_10, usize}] {
            af_10 = false;
        } else {
            ad[ag_10 + 10] = s_10;
            ac[a! {s_10, usize}] = true;
            ah_10 += 1;
        }
        if ac[a! {s_11, usize}] {
            af_11 = false;
        } else {
            ad[ag_11 + 11] = s_11;
            ac[a! {s_11, usize}] = true;
            ah_11 += 1;
        }
        if ac[a! {s_12, usize}] {
            af_12 = false;
        } else {
            ad[ag_12 + 12] = s_12;
            ac[a! {s_12, usize}] = true;
            ah_12 += 1;
        }
        if ac[a! {s_13, usize}] {
            af_13 = false;
        } else {
            ad[ag_13 + 13] = s_13;
            ac[a! {s_13, usize}] = true;
            ah_13 += 1;
        }
        if ac[a! {s_14, usize}] {
            af_14 = false;
        } else {
            ad[ag_14 + 14] = s_14;
            ac[a! {s_14, usize}] = true;
            ah_14 += 1;
        }
        if ac[a! {s_15, usize}] {
            af_15 = false;
        } else {
            ad[ag_15 + 15] = s_15;
            ac[a! {s_15, usize}] = true;
            ah_15 += 1;
        }
        if af_0 {
            let mut z: x = Default::default();
            z[a! {ab, usize} + 2][0] = std::i32::MAX;
            // ...
        }
        // ...
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