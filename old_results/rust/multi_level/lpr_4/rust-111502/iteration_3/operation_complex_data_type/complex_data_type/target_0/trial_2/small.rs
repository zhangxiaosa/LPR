fn c() -> bool {
    let null_ptr: *mut f64 = core::ptr::null_mut();
    let tuple: (f64, bool) = (1.0, false);
    unsafe { f((null_ptr, tuple)) }
}

unsafe fn f(d: (*mut f64, (f64, bool))) -> bool {
    let i: *mut bool = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = true;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}