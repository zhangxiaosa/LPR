fn c() -> bool {
    let mut a = (0.0, true);
    let e = true; // Optimized assignment
    return e;
}

fn main() {
    println!("{}", c());
}