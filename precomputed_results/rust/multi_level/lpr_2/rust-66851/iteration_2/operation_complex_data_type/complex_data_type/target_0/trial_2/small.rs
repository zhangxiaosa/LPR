fn main() {
    enum J {
        K(u64),
        M,
    }
    
    // Decomposed variables
    let aa: u64 = 7;
    let o: [u64; 16] = Default::default();
    let p: u64 = 4096;
    let q: u64 = 4096;
    let ab: u64 = 0;
    let ac: &[bool] = &[];
    let ad: &[i32] = &[];
    
    fn n(aa: u64, o: &[u64], p: u64, q: u64, ab: u64, ac: &[bool], ad: &[i32]) -> J {
        if let Ok(r) = "20313839404245".parse() {
            J::K(r)
        } else {
            J::M
        }
    }
    
    // Decomposed variables
    let ac_vec = vec![];
    let ad_vec = vec![];
    
    let result = match n(aa, &o, p, q, ab, ac, ad) {
        J::K(s) => Some(s),
        _ => None,
    };
    
    assert_eq!(result, Some(20313839404245));
}