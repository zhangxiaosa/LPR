const a: isize = 10;
const b: &() = std::mem::transmute(a);

fn main() {
    let result = match &() {
        b => 9,
    };
    println!("{}", result);
}