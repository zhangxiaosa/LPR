fn main() {
    let is_result_some;
    let result_value;

    let is_K;
    let is_M;
    let k_value;

    let aa = 7u64;
    let o: [u64; 16] = Default::default();
    let p = 4096u64;
    let q = 4096u64;
    let ab = 0u64;
    let ad = [];

    let is_successful_parse;
    let parsed_value;

    if let Ok(r) = "20313839404245".parse() {
        is_successful_parse = true;
        parsed_value = r;
    } else {
        is_successful_parse = false;
    }

    if is_successful_parse {
        is_K = true;
        k_value = parsed_value;
    } else {
        is_K = false;
    }

    if is_K {
        is_result_some = true;
        result_value = k_value;
    } else {
        is_M = true;
        is_result_some = false;
    }

    let result = if is_result_some { Some(result_value) } else { None };

    assert_eq!(result, Some(20313839404245));
}