fn a(b: &i32) -> &i32 {
    b
}

fn d() {
    assert_eq!(a(&0), a(&0));
}