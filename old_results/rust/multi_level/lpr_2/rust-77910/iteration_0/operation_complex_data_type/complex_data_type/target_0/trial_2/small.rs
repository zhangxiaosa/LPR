fn a(b: i32) -> i32 {
    let c = b;
    c
}

fn d() {
    let c = 0;
    let result = a(c);
    assert_eq!(result, c);
}