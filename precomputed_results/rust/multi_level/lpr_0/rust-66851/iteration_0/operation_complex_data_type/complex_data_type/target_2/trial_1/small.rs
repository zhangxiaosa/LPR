fn main() {
    const e: i32 = 7;
    const f: i32 = 1 << 12;
    const w: usize = f as _;

    enum j {
        k(u64),
        l(i32),
        m,
    }

    fn n(aa: i32, o: &[[i32; 2]], p: i32, q: i32, ab: i32, ac: &mut [bool], ad: &mut [i32]) -> j {
        // function body
    }

    let mut ac = [false; w];
    let mut ad = [0i32; 1 << e];
    let mut o: [[i32; 2]; 16] = Default::default();

    match n(e, &o, f, f, 0, &mut ac, &mut ad) {
        j::k(s) => assert_eq!(Some(s), Some(20_313_839_404_245)),
        _ => panic!(),
    }
}