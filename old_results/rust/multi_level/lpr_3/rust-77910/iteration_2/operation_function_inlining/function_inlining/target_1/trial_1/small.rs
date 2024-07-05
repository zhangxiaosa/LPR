fn d() {
    let a = |b: &i32| -> &i32 { b };
    assert_eq!(a, a);
}