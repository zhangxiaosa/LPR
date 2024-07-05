const a: isize = 10;
let temp = a;
const ref_b: &isize = &temp;
fn c() {
    match &() {
        ref_b => 9,
    };
}