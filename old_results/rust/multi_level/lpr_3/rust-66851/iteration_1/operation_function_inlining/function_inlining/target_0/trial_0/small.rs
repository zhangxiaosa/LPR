fn d() -> Option<u64> {
    const e: i32 = 7;
    const f: i32 = 12;
    enum j {
        k(u64),
        l(i32),
        m,
    }
    
    if 0 == e {
        let mut ae = String::new();
        for i in (0..0) {
            ae += &ad[1 << i].to_string();
        }
        return if let Ok(r) = ae.parse() {
            j::k(r)
        } else {
            j::m
        };
    }
    let u = 0;
    let af = if 0 == e {
        let mut ae = String::new();
        for i in (0..0) {
            ae += &ad[1 << i].to_string();
        }
        if let Ok(r) = ae.parse() {
            j::k(r)
        } else {
            j::m
        }
    } else {
        let aa = e;
        let o: [[i32; 2]; 16] = Default::default();
        let p = f;
        let ab = 0;
        let ac_decomposed = [];
        let ad = [0i32; 1 << e];
        let aa = e;
        let o: [[i32; 2]; 16] = Default::default();
        let p = f;
        let ab = ab + 1;
        let ac_decomposed = ac_decomposed;
        let ad = ad;

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
            let af = if ab == aa {
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
                let aa = e;
                let o: [[i32; 2]; 16] = Default::default();
                let p = f;
                let ab = ab + 1;
                let ac_decomposed = ac_decomposed;
                let ad = ad;
                let u = 0;
                
                let af = if ab == aa {
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
                    let af = n(aa, o, p, u, ab + 1, ac_decomposed, ad);
                    match af {
                        j::k(_) => af,
                        l => {}
                    }
                    j::l(p)
                };
                
                let af = n(aa, o, p, u, ab + 1, ac_decomposed, ad);
                match af {
                    j::k(_) => af,
                    l => {}
                }
                j::l(p)
            };
            
            let af = n(aa, o, p, u, ab + 1, ac_decomposed, ad);
            match af {
                j::k(_) => af,
                l => {}
            }
            j::l(p)
        }
    };
    
    let ac_decomposed = [];
    let ad = [0i32; 1 << e];
    let o: [[i32; 2]; 16] = Default::default();
    
    match if 0 == e {
        let mut ae = String::new();
        for i in (0..0) {
            ae += &ad[1 << i].to_string();
        }
        if let Ok(r) = ae.parse() {
            j::k(r)
        } else {
            j::m
        }
    } else {
        let aa = e;
        let o: [[i32; 2]; 16] = Default::default();
        let p = f;
        let ab = 0;
        let ac_decomposed = [];
        let ad = [0i32; 1 << e];
        let aa = e;
        let o: [[i32; 2]; 16] = Default::default();
        let p = f;
        let ab = ab + 1;
        let ac_decomposed = ac_decomposed;
        let ad = ad;
        let u = 0;
        
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
            let af = n(aa, o, p, u, ab + 1, ac_decomposed, ad);
            match af {
                j::k(_) => af,
                l => {}
            }
            j::l(p)
        }
    } {
        j::k(_) => Some(20313839404245),
        _ => None,
    }
}

fn main() {
    assert_eq!(d(), Some(203_138_394_042_45));
}