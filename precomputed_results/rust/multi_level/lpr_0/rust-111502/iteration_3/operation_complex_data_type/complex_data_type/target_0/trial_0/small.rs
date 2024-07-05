fn c() -> f64 {
    let mut a = 0.0;
    unsafe { f((&mut a, (0.0, 0.0))) }
}

unsafe fn f(d: (*mut f64, (f64, f64))) -> f64 {
    let i = core::ptr::addr_of!(d.1 .1) as *mut f64;
    *i = 1.0;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}