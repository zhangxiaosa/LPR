fn a(_: &i32) -> &i32 {
    
}

fn d() {
    let _unused_c;
    assert_eq!(a, _unused_c);
}