const a: isize = 10;
const b_ref: &() = std::mem::transmute(a);
fn main() {
    match &() {
        b => 9,
    };
}