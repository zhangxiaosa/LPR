fn a(b: &i32) -> &i32 {
    // 'c' is optimized out
    b
}

fn d() {
    let e;
    assert_eq!(a, e);
}
