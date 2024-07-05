fn d() -> Option<u64> {
    const e: i32 = 7;
    const f: i32 = 12;
    enum j {
        k(u64),
        l(i32),
        m,
    }

    if e == e {
        let mut ae = String::new();
        let ab = e;
        let aa = e;
        let ac_decomposed = [];
        let ad = [0i32; 1 << e];
        let o: [[i32; 2]; 16] = Default::default();

        if ab == aa {
            for i in 0..ab {
                ae += &ad[1 << i].to_string();
            }
            return if let Ok(r) = ae.parse() {
                Some(203_138_394_042_45)
            } else {
                None
            };
        }
        let u = 0;
        let af = n(aa, &o, f, u, ab + 1, &ac_decomposed, &ad);
        match af {
            j::k(_) => return Some(203_138_394_042_45),
            l => {}
        }
        j::l(f)
    } else {
        None
    }
}

fn main() {
    assert_eq!(d(), Some(203_138_394_042_45));
}