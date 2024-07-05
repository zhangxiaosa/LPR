fn a(b: &i32) -> &i32 {
    b
}

fn d() {
    let a: fn(&i32) -> &i32 = a;
    assert_eq!(a, a);
}
