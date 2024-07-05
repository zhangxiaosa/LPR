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
        // Unrolled loop
        {   // Unroll 1
            let index_1 = (ab - 0) as usize;
            t = t.max(
                o[usize::try_from(index_1).unwrap() + 1][1] - o[usize::try_from(index_1).unwrap() + 1][0],
            );
        }
        {   // Unroll 2
            let index_2 = (ab - 1) as usize;
            t = t.max(
                o[usize::try_from(index_2).unwrap() + 1][1] - o[usize::try_from(index_2).unwrap() + 1][0],
            );
        }
        // ... Continue unrolling code as required
        let mut u = t;
        // ... Continue unrolled loop body code as required
        j::l(p)
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