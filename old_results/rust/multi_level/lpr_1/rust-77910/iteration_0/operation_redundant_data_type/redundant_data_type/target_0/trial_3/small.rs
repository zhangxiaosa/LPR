fn a(b: i32) -> i32 {
    b
}

fn d() {
    let e: i32;
    assert_eq!(a(e), e);
}