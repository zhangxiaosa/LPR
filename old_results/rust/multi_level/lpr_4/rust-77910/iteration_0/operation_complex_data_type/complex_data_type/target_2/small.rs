fn a(b: &i32) -> &i32 {
    b
}

fn d() {
    let x: i32; // Decomposed variable
    let e = &x;
    assert_eq!(a, e);
}
