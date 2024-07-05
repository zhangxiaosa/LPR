fn a(b: &i32) -> i32 {
    let c: i32;
    c = *b;
    c
}

fn d() {
    let e: i32;
    let a_variable: i32;
    a_variable = 0;
    assert_eq!(a_variable, e);
}
