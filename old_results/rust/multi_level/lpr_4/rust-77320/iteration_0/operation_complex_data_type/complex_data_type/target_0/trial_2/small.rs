fn main() {
    let a: isize = 10;
    let b = &a;

    match b {
        &_ => 9,
    };
}