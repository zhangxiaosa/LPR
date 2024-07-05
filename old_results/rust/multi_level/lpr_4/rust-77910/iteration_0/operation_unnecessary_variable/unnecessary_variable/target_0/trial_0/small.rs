fn a(_: &i32) -> &i32 {
    &42
}

fn d() {
    let e;
    assert_eq!(a(&42), e);
}