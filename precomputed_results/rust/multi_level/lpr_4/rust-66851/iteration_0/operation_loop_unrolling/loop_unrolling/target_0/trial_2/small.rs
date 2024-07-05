use std::convert::TryFrom;

fn d() -> Option<u64> {
    const e: i32 = 7;
    const f: i32 = 1 << 12;
    const w: usize = f as usize;
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

        t = t.max(o[usize::try_from(0).unwrap() + 1][1] - o[usize::try_from(0).unwrap() + 1][0]);
        t = t.max(o[usize::try_from(1).unwrap() + 1][1] - o[usize::try_from(1).unwrap() + 1][0]);
        t = t.max(o[usize::try_from(2).unwrap() + 1][1] - o[usize::try_from(2).unwrap() + 1][0]);
        t = t.max(o[usize::try_from(3).unwrap() + 1][1] - o[usize::try_from(3).unwrap() + 1][0]);
        t = t.max(o[usize::try_from(4).unwrap() + 1][1] - o[usize::try_from(4).unwrap() + 1][0]);
        t = t.max(o[usize::try_from(5).unwrap() + 1][1] - o[usize::try_from(5).unwrap() + 1][0]);
        t = t.max(o[usize::try_from(6).unwrap() + 1][1] - o[usize::try_from(6).unwrap() + 1][0]);

        let mut u = t;
        while u < y {
            let mut af = true;
            let ag = 1 << ab;
            let mut ah = 0;
    ...
}