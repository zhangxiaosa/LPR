fn a(b: &i32) -> &i32 {
    let c: i32 = 0;
    &c
}

fn d() {
    let e: i32 = 0;
    let a = a(&e);
    assert_eq!(a, &e);
}