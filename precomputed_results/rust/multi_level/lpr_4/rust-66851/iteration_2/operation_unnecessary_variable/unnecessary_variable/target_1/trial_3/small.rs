fn d() -> u64 {
    enum j {
        k(u64),
        l(i32),
        m,
    }
    fn n(o: &[[i32; 2]; 16], p: i32, q: i32, ab: i32, ac: &mut [bool], ad: &mut [i32]) -> j {
        let mut ae = String::new();
        for i in (0..7).rev() {
            ae += &ad[1 << i].to_string();
        }
        if let Ok(r) = ae.parse() {
            return j::k(r);
        } else {
            return j::m;
        }
    }
    let mut ac = [false; 8192];
    let mut ad = [0i32; 128];
    let o = Default::default();
    match n(&o, 4096, 4096, 0, &mut ac, &mut ad) {
        j::k(ad_i_u) => ad_i_u,
        _ => 0,
    }
}

fn main() {
    assert_eq!(d(), 20_313_839_404_245);
}