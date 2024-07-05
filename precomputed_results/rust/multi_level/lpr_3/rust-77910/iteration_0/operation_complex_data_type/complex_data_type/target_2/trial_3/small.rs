fn a(b: &i32) -> &i32 {
    b
}

fn d() {
    let e = a(&42);
    assert_eq!(&a(&42), e);
}