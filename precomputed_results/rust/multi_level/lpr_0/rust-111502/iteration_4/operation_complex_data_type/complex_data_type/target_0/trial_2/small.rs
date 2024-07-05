fn c() -> f64 {
    let mut ptr: *mut f64 = std::ptr::null_mut();
    let mut tuple: (f64, f64) = (0.0, 0.0);
    let mut d: (*mut f64, (f64, f64)) = (&mut ptr, tuple);
    unsafe { f(d) }
}

unsafe fn f(d: (*mut f64, (f64, f64))) -> f64 {
    let i = core::ptr::addr_of!(d.1 .1) as *mut f64;
    *i = 1.0;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}