const a: i32 = 10;
const b: &() = std::mem::transmute(a);
fn main() {
    match &() {
        b => 9,
    };
}