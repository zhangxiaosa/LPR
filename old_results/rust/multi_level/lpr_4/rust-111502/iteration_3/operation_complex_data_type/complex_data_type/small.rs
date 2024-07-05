fn c() -> bool {
    let ptr: *mut f64 = core::ptr::null_mut();
    let t: (f64, bool) = (1.0, false);
    unsafe { f((ptr, t)) }
}

unsafe fn f(d: (*mut f64, (f64, bool))) -> bool {
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = true;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}
