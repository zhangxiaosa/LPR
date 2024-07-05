fn c() -> bool {
    let mut a = 0.0;
    let b = true;
    let i = &mut a as *mut f32;
    unsafe {
        *i = b;
    }
    return b.3;
}

fn main() {
    println!("{}", c());
}