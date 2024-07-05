fn d() -> u64 {
    fn n(aa: i32, o: &[[i32; 2]; 16], p: i32, q: i32, ab: i32, ac: &mut [bool], ad: &mut [i32]) -> (u64,j) {
        if ab == aa {
            let mut ae = String::new();
            let mut ae_parse_error = false;
            for i in (0..ab).rev() {
                ae += &ad[1 << i].to_string();
            }
            let ae_parsed = ae.parse::<u64>();
            let ae_parsed_result = if let Ok(r) = ae_parsed {
                j::k(r)
            } else {
                ae_parse_error = true; j::m
            };
            (ae_parsed_result, ae_parse_error)
        } else {...
        let mut ac = [false; 8192];
        let mut ad = [0i32; 128];
        let o: [[i32; 2]; 16] = [[0, 0]; 16];
        let n_result = n(7, &o, 4096, 4096, 0, &mut ac, &mut ad);
        let ad_i_u = if let j::k(x) = n_result { x } else { 0 };
        let result = ad_i_u;
        result
    }
}

fn main() {
    assert_eq!(d(), 20313839404245);
}