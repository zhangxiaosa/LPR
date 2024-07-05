fn a(b: &i32) -> i32 {
    *b
}

fn d() {
    let e: i32;
    let a: i32 = 0; // Initialize as per your requirement
    e = a;
    assert_eq!(a, e);
}