fn a(_: &i32) -> &i32 {
    let _unused_c;
    _unused_c
}
fn d() {
    let _unused_c;
    assert_eq!(a, _unused_c);
}
