fn a(_: &i32) -> &i32 {
    unimplemented!()
}

fn d() {
    assert_eq!(a, a);
}
