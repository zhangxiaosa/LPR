const a: isize = 10;
const b: *const () = std::mem::transmute(a);
fn main() {
    match *const () {
        b => 9,
    };
}