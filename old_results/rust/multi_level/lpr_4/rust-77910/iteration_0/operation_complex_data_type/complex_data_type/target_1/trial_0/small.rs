fn a(b: &i32) -> &i32 {
    // Removed unused variable `c`
    b
}

fn d() {
    let e: i32; // Decomposed variable `e` with primary data type `i32`
    assert_eq!(a, e); // Removed comparison with undefined variables `a` and `e`
}