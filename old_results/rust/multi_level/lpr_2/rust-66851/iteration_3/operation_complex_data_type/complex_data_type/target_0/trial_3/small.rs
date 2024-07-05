fn main() {
    enum J {
        K(u64),
        M,
    }
    let _p: u64 = 4096u64;
    let _q: u64 = 4096u64;
    let ad: &[i32] = &[];

    let is_k: bool;
    let value_k: u64;
    let is_m: bool;

    if let Ok(r) = "20313839404245".parse() {
        is_k = true;
        value_k = r;
        is_m = false;
    } else {
        is_k = false;
        value_k = 0;
        is_m = true;
    }

    let result = if is_k {
        Some(value_k)
    } else {
        None
    };
    assert_eq!(result, Some(20313839404245));
}