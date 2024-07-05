fn a(b: &i32) -> &i32 {
    let b_value = *b;
    &b_value
}

fn d() {
    let e: i32;
    assert_eq!(a, e);
}