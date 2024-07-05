fn c() -> bool {
    let a_3 = false;
    let a = (core::ptr::null_mut(), 0.0, a_3);
    let b = true;
    let i: *mut bool = &mut a.2;
    *i = b;
    a.2
}

fn main() {
    println!("{}", c());
}