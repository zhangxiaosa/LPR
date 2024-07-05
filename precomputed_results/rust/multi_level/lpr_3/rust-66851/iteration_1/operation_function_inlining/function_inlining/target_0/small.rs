fn d() -> Option<u64> {
    const e: i32 = 7;
    const f: i32 = 12;
    enum j {
        k(u64),
        l(i32),
        m,
    }
    fn n(
        aa: i32,
        o: &[[i32; 2]],
        p: i32,
        q: i32,
        ab: i32,
        ac_decomposed: &[bool],
        ad: &[i32],
    ) -> j {
        if ab == aa {
            let mut ae = String::new();
            for i in (0..ab) {
                ae += &ad[1 << i].to_string();
            }
            return if let Ok(r) = ae.parse() {
                j::k(r)
            } else {
                j::m
            };
        }
        let u = 0;
        let af = n(aa, o, p, u, ab + 1, ac_decomposed, ad);
        match af {
            j::k(_) => return af,
            l => {}
        }
        j::l(p)
    }
    let ac_decomposed = [];
    let ad = [0i32; 1 << e];
    let o: [[i32; 2]; 16] = Default::default();
    match n(e, &o, f, f, 0, &ac_decomposed, &ad) {
        j::k(_) => Some(20313839404245),
        _ => None,
    }
}
fn main() {
    assert_eq!(d(), Some(203_138_394_042_45));
}
