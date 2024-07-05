fn a(b: i32) -> i32 {
    b
}

fn d() {
    let e: i32;
    let b: i32 = 0;
    e = a(b);
    assert_eq!(a(b), e);
}