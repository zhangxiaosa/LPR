fn main() {
    const F: i32 = 1 << 12;
    enum J {
        K(u64),
        L(i32),
        M,
    }
    fn n(aa: i32, o: &[[i32; 2]], p: i32, q: i32, ab: i32, ac: &mut [bool], ad: &mut [i32]) -> J {
        if ab == aa {
            return if let Ok(r) = {
                let mut ae = String::new();
                ae += &ad[1 << ab - 1].to_string();
                ae += &ad[1 << ab - 2].to_string();
                ae += &ad[1 << ab - 3].to_string();
                ae += &ad[1 << ab - 4].to_string();
                ae += &ad[1 << ab - 5].to_string();
                ae += &ad[1 << ab - 6].to_string();
                ae += &ad[1 << ab - 7].to_string();
                ae.parse()
            } {
                J::K(r)
            } else {
                J::M
            };
        }
        // Rest of the program...
    }

    // Rest of the program...
    assert_eq!(result, Some(20_313_839_404_245));
}