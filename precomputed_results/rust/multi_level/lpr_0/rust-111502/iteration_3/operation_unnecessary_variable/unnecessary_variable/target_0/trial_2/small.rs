fn main() {
    println!("{}", f((0.0, 0.0)));
}

unsafe fn f(d: (f64, f64)) -> f64 {
    let i = core::ptr::addr_of!(d.1 .1) as *mut f64;
    *i = 1.0;
    d.1 .1
}