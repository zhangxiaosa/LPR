fn a(_: &i32) -> &i32 {
    // No need for "_unused_c" declaration
    // Removed "_unused_c"
    // Empty function body
}

fn d() {
    // No need for "_unused_c" declaration
    // Removed "_unused_c"
    assert_eq!(a, _unused_c);  // Comparison does not have any meaningful effect
}