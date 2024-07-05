fn c() -> bool {
    let ptr: *mut f64 = core::ptr::null_mut();
    let t_0: f64 = 1.0;
    let t_1: bool = false;
    unsafe { f((ptr, (t_0, t_1))) }
}

unsafe fn f(d_0: *mut f64, d_1_0: f64, d_1_1: bool) -> bool {
    let i: *mut bool = core::ptr::addr_of!(d_1_1) as *mut bool;
    *i = true;
    d_0;
    return d_1_1;
}

fn main() {
    println!("{}", c());
}