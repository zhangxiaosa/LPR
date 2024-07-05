fn c() -> bool {
    unsafe { f((core::ptr::null_mut(), (1.0, false))) }
}

unsafe fn f(d_0: *mut f64, d_1_0: f64, d_1_1: bool) -> bool {
    let i = core::ptr::addr_of!(d_1_1) as *mut bool;
    *i = true;
    return d_1_1;
}

fn main() {
    println!("{}", c());
}