fn a(b_value: i32, b_reference: &i32) -> i32 {
    let c_value: i32;
    let c_reference: &i32 = &c_value;

    c_value
}

fn d() {
    let e_value: i32;

    assert_eq!(a, e_value);
}