fn a(b_val: i32) -> i32 {
    b_val
}

fn d() {
    assert_eq!(a(a), a(a));
}