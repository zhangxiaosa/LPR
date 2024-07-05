fn a(_: &i32) -> &i32 {}

fn d() {
    assert_eq!(a, ());
}