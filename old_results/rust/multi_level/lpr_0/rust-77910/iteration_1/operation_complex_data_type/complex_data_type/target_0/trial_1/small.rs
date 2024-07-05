fn a(b: i32) -> i32 {
    b
}

fn d() {
    let a = 0; // Define a local variable `a` of type i32
    assert_eq!(a, a);
}