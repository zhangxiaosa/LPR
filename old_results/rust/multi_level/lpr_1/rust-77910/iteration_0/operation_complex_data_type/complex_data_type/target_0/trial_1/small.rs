fn a() -> &i32 {
    let b: &i32 = &42;
    let c = *b;
    &c
}

fn d() {
    let e;
    let new_variable = *a();
    assert_eq!(new_variable, e);
}