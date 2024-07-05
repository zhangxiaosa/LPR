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
        for i in (0..e) {
            ae += &ad[1 << i].to_string();
        }
        return if let Ok(r) = ae.parse() {
            Some(r)
        } else {
            None
        };
    }
    j::l(f)
}

fn main() {
    assert_eq!(d(), Some(203_138_394_042_45));
}