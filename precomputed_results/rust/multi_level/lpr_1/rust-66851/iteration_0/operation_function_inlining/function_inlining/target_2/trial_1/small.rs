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

    const aa: i32 = e;
    const p: i32 = f;
    let mut ac = [false; w];
    let mut ad = [0i32; 1 << e];
    let mut o: x = Default::default();
    o[1][0] = std::i32::MAX;

    let mut ab = 0;
    let mut ae = String::new();
    for i in (0..ab + 1).rev() {
        ae += &ad[1 << i].to_string();
    }
    if let Ok(r) = ae.parse() {
        Some(r)
    } else {
        None
    }
}

fn main() {
    assert_eq!(d(), Some(20_313_839_404_245));
}