fn a(b: &i32) -> i32 {
    *b
}

fn d() {
    let a1 = a(&10);
    let a2 = a(&10);
    assert_eq!(a1, a2);
}