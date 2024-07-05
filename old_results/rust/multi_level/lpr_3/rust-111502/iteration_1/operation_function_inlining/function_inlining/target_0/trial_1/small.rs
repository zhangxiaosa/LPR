fn c() -> bool {
    let mut a = 0.0;
    let d_0 = &mut a;
    let d_3 = false;
    let i = core::ptr::addr_of!(d_3) as *mut bool;
    *i = true;
    let e = d_3;
    return e;
}

fn main() {
    println!("{}", c());
}