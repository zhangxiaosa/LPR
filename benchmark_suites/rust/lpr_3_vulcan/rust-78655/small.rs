const a: *const u32 = {
    let b;
    &b
};
fn macro_rules() {
    let a = a;
}
