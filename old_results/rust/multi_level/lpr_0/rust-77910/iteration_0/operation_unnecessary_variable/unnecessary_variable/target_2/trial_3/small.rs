fn a(b: &i32) -> &i32 {
    b
}

fn main() {
    let a_val = 42;
    let e = a(&a_val);
    assert_eq!(e, e);
}