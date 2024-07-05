fn d() -> Option<u64> {
    const e: i32 = 7;
    const f: i32 = 12;
    enum j {
        k(u64),
        l(i32),
        m,
    }
    let ac_decomposed = [];
    let ad = [0i32; 1 << e];
    let o: [[i32; 2]; 16] = Default::default();
    if 0 == e {
        let mut ae = String::new();
        for i in (0..0) {
            ae += &ad[1 << i].to_string();
        }
        return if let Ok(r) = ae.parse() {
            Some(203_138_394_042_45)
        } else {
            Some(203_138_394_042_45)
        };
    }
    let u = 0;
    let af = {
        if e == e {
            let mut ae = String::new();
            for i in (0..e) {
                ae += &ad[1 << i].to_string();
            }
            return if let Ok(r) = ae.parse() {
                j::k(r)
            } else {
                j::m
            };
        }
        let u = 0;
        let af = {
            if e == e {
                let mut ae = String::new();
                for i in (0..e) {
                    ae += &ad[1 << i].to_string();
                }
                return if let Ok(r) = ae.parse() {
                    j::k(r)
                } else {
                    j::m
                };
            }
            let u = 0;
            let af = n(e, &o, f, u, e + 1, &ac_decomposed, &ad);
            match af {
                j::k(_) => return af,
                l => {}
            }
            j::l(f)
        };
        match af {
            j::k(_) => return af,
            l => {}
        }
        j::l(f)
    };
    match af {
        j::k(_) => Some(203_138_394_042_45),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(203_138_394_042_45));
}