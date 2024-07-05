fn a(b: i32) -> i32 {
    b
}

fn d() {
    let a1 = 10;
    let result = a(a1);
    assert_eq!(result, result);
}