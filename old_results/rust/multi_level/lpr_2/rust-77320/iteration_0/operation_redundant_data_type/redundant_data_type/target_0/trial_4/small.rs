const a: isize = 10;
const b: isize = std::mem::transmute(a);
fn c() {
    match isize {
        b => 9,
    };
}