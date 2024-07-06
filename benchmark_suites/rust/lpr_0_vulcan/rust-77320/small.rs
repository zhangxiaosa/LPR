const a: isize = 10;
const b: &() = std::mem::transmute(a);
fn macro_rules() {
    match &{} {
        b => 9,
    };
}
