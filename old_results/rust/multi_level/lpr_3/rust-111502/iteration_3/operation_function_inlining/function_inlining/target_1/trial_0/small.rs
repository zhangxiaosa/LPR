fn c() -> bool {
    let mut a = 0.0;
    let i = core::ptr::addr_of!(a.3) as *mut bool;
    *i = true;
    return a.3;
}

fn main() {
    println!("{}", c());
}