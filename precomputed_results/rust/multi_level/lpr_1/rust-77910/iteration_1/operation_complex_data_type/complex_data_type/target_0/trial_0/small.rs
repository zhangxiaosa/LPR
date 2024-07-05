fn a(b: &i32) -> &i32 {
    b
}

fn d() {
    let b = 42;
    let a = &b;
    assert_eq!(a, a);
}