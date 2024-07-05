fn c() -> bool {
    let mut a = 0.0;
    let i = &mut a as *mut f32;
    unsafe { *i = 1.0; }
    return false;
}

fn main() {
    println!("{}", c());
}