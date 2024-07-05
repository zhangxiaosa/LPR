fn c() -> bool {
    let mut a = 0.0;
    let a_ptr = &mut a as *mut f32;
    let b = true;
    let i = &mut a as *mut bool;
    *i = b;
    return a;
}

fn main() {
    println!("{}", c());
}