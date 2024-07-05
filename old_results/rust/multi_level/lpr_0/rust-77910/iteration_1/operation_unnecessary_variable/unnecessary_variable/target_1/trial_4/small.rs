fn a(_b: &i32) -> &i32 {
    _b
}

fn d() {
    assert_eq!(b, b);
}