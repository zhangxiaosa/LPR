fn c() -> bool {
    let mut a = 0.0;
    let d_0 = &mut a;
    let d_3 = false;
    let i = core::ptr::addr_of!(((d_0, true, 0.0, d_3)).3) as *mut bool;
    *i = true;
    ((d_0, true, 0.0, d_3)).3
}

fn main() {
    println!("{}", c());
}