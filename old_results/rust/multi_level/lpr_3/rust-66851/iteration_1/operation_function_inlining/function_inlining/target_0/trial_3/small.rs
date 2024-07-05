fn d() -> Option<u64> {
    const e: i32 = 7;
    const f: i32 = 12;
    let ac_decomposed = [];
    let ad = [0i32; 1 << e];
    let o: [[i32; 2]; 16] = Default::default();

    if 0 == e {
        let mut ae = String::new();
        for i in (0..1) {
            ae += &ad[1 << i].to_string();
        }
        return if let Ok(r) = ae.parse() {
            Some(20313839404245)
        } else {
            None
        };
    }

    let u = 0;

    let af = {
        let aa = e;
        let o = &o;
        let p = f;
        let q = f;
        let ab = 0;
        let ac_decomposed = &ac_decomposed;
        let ad = &ad;

        if ab == aa {
            let mut ae = String::new();
            for i in (0..ab) {
                ae += &ad[1 << i].to_string();
            }
            if let Ok(r) = ae.parse() {
                j::k(r)
            } else {
                j::m
            }
        } else {
            0
        }
    };

    match af {
        j::k(_) => Some(20313839404245),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(203_138_394_042_45));
}