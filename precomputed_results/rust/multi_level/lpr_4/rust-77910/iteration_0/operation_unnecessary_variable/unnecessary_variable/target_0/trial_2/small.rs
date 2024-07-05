fn a(_: &i32) -> &i32 {}

fn d() {
    let e;
    assert_eq!(a, e);
}
