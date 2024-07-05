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

        t = t.max(o[a! {7, usize} + 1][1] - o[a! {7, usize} + 1][0]);
        t = t.max(o[a! {6, usize} + 1][1] - o[a! {6, usize} + 1][0]);
        t = t.max(o[a! {5, usize} + 1][1] - o[a! {5, usize} + 1][0]);
        t = t.max(o[a! {4, usize} + 1][1] - o[a! {4, usize} + 1][0]);
        t = t.max(o[a! {3, usize} + 1][1] - o[a! {3, usize} + 1][0]);
        t = t.max(o[a! {2, usize} + 1][1] - o[a! {2, usize} + 1][0]);
        t = t.max(o[a! {1, usize} + 1][1] - o[a! {1, usize} + 1][0]);
        t = t.max(o[a! {0, usize} + 1][1] - o[a! {0, usize} + 1][0]);

        let mut u = t;
        while u < y {
            let mut af = true;
            let ag = 1 << ab;
            let mut ah = 0;
