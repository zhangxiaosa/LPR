fn main() {
    const e: i32 = 7;
    const f: i32 = 1 << 12;
    let mut ac = [false; f as usize];
    let mut ad = [0i32; 1 << 7];
    let mut o = [[0i32; 2]; 16];
    o[1][0] = std::i32::MAX;
    match n(e, &o, f, f, 0, &mut ac, &mut ad) {
        j::k(s) => assert_eq!(Some(s), Some(20_313_839_404_245)),
        _ => panic!(),
    }
}

enum j {
    k(u64),
    l(i32),
    m,
}

fn n(aa: i32, o: &[[i32; 2]], p: i32, q: i32, ab: i32, ac: &mut [bool], ad: &mut [i32]) -> j {
    let mut ae = String::new();
    for i in (0..ab).rev() {
        ae += &ad[1 << i].to_string();
    }
    if let Ok(r) = ae.parse() {
        j::k(r)
    } else {
        j::m
    }
}