fn d() -> u64 {
    enum j {
        k(u64),
        l(i32),
        m,
    }

    fn n(o: &[[i32; 2]; 16], ab: i32, ac: &mut [bool], ad: &mut [i32]) -> j {
        if ab == 7 {
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

        let mut u = o[3][1] - o[3][0];
        let q = 4096; // Constant propagation
        while u < 4096 { // Replace 'q' with the constant value
            // Rest of the code
            // ...
        }

        j::l(4096)
    }

    let mut ac = [false; 8192];
    let mut ad = [0i32; 128];
    match n(&Default::default(), 0, &mut ac, &mut ad) {
        j::k(ad_i_u) => ad_i_u,
        _ => 0,
    }
}

fn main() {
    assert_eq!(d(), 20_313_839_404_245);
}