fn main() {
    let b: u32 = 0;
    let a: &u32 = &b;

    c(a);
}

fn c(a: &u32) {
    // Use a as needed
    // ...
}