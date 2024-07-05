const b: &() = std::mem::transmute(a);
fn main() {
    match &() {
        b => 9,
    };
}