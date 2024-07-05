const b: &() = std::mem::transmute(10);
fn main() {
    match &() {
        b => 9,
    };
}