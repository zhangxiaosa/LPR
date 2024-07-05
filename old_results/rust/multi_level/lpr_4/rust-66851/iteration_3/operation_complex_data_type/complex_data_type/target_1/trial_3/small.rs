fn d() -> u64 {
    enum j {
        k(u64),
        l(i32),
        m,
    }
    fn n(o: &[[i32; 2]; 16], ab: i32, q: i32, ac: &mut [bool], ad_0: i32, ad_1: i32, /* ... */, ad_126: i32, ad_127: i32) -> j {
        /* function body */
    }
    let mut ac = [false; 8192];
    let ad_0 = 0;
    let ad_1 = 0;
    /* ... */
    let ad_126 = 0;
    let ad_127 = 0;
    match n(&Default::default(), 0, 4096, &mut ac, ad_0, /* ... */, ad_126, ad_127) {
        j::k(ad_i_u) => ad_i_u,
        _ => 0,
    }
}

fn main() {
    assert_eq!(d(), 20_313_839_404_245);
}