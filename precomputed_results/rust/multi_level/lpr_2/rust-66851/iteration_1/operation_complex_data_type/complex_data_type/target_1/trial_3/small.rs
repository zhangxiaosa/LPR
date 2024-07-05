fn main() {
    const F: i32 = 1 << 12;
    enum J {
        K(u64),
        L(i32),
        M,
    }
    fn n(aa: i32, o: &[[i32; 2]], p: i32, q: i32, ab: i32, ac: &mut [bool], ad: &mut [i32]) -> J {
        // Function body
    }
    let mut ac = vec![false; 4096];
    let mut ad = vec![0i32; 128];
    let mut o: [[i32; 2]; 16] = Default::default();
    // Modify values of o
    let result = match n(7, &o, F, F, 0, &mut ac, &mut ad) {
        J::K(s) => Some(s),
        _ => None,
    };
    assert_eq!(result, Some(20_313_839_404_245));
}