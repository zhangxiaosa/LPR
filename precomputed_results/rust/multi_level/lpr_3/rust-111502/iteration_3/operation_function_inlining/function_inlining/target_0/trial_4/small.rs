fn c() -> bool {
    let mut a = 0.0;
    let i = core::ptr::addr_of!((&mut a, true, 0.0, false).3) as *mut bool;
    *i = true;
    (&mut a, true, 0.0, false);
    return (&mut a, true, 0.0, false).3;
}

fn main() {
    println!("{}", c());
}