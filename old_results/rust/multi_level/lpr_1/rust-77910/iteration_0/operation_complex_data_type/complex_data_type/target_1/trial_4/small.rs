fn a(b: i32) -> i32 {
    let c: i32;
    c = b;
    c
}

fn d() {
    let e: i32;
    assert_eq!(a(0), e);
}