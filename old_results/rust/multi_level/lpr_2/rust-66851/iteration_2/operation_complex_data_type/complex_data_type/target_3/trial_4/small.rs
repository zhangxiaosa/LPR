fn main() {
    fn n(aa: u64, o: &[u64], p: u64, q: u64, ab: u64, ad: &[i32]) -> (bool, u64) {
        let mut is_k = false;
        let mut k_value = 0;

        if let Ok(r) = "20313839404245".parse() {
            is_k = true;
            k_value = r;
        }

        (is_k, k_value)
    }

    let ad: Vec<i32> = vec![];
    let o: u64 = 0;

    let (is_k, k_value) = n(7u64, &[o; 16], 4096u64, 4096u64, 0u64, &ad);

    let result = if is_k {
        Some(k_value)
    } else {
        None
    };

    assert_eq!(result, Some(20313839404245));
}