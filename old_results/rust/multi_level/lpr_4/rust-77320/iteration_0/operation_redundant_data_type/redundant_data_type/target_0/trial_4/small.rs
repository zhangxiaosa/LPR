const a: isize = 10;
const b: isize = a;

fn main() {
    match &() {
        _ => 9,
    };
}