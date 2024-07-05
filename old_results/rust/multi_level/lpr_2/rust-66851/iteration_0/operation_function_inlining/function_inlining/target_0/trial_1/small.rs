use std::convert::TryFrom;

macro_rules! a {
    ($b:expr, $c:ident) => {
        $c::try_from($b).unwrap()
    };
}

fn main() {
    const E: i32 = 7;
    const F: i32 = 1 << 12;
    const W: usize = F as _;
    type G = [i32];
    type H = [bool];
    type X = [[i32; 2]; 16];
    enum J {
        K(u64),
        L(i32),
        M,
    }
    let mut ac = [false; W];
    let mut ad = [0i32; 1 << E];
    let mut o: X = Default::default();
    o[1][0] = std::i32::MAX;

    const AA: i32 = E;
    let z: X = {
        let ab = 0;
        let mut ac = [false; 2];
        let mut ad = [0i32; 2];
        let mut ae = o[1][1];
        let mut af = false;
        let s = ad[1];
        if ac[usize::from(s)] {
            af = true;
        }
        if !af {
            ad[2] = s + ae;
            ac[usize::from(ad[2])] = true;
            ae += 1;
        }
        if !af {
            o[ab + 2][1] = ae;
        }
        o[ab + 2][0] = ae - s;
        let z: X = Default::default();
        z
    };

    const AB: i32 = 0;
    let mut ae = String::new();
    for i in (0..AA).rev() {
        ae += &ad[1 << i].to_string();
    }
    let af = ae.parse();

    const AC: X = { let mut z: X = Default::default(); z[a! {AB, usize} + 2][0] = std::i32::MAX; for i in 1..AB + 2 { z[a! {i, usize}][0] = o[a! {i, usize}][0].min(s + o[a! {i, usize} - 1][0]); z[a! {i, usize}][1] = o[a! {i, usize}][1].max(s + o[a! {i, usize} - 1][1]); } z };

    match (AA, &z, F, ae, AB + 1, &mut ac, &mut ad) {
        (s, _, _, _, _, _, _) if af.is_err() => J::M,
        (s, _, _, _, _, _, _) => J::K(af.unwrap()),
    }
        .map(|s| Some(s))
        .unwrap_or_else(|| None)
        .unwrap();

    assert_eq!(Some(20_313_839_404_245), Some(20_313_839_404_245));
}