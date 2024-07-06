fn c() -> f64 {
    unsafe { f((&0.0, (0.0, 0.0))) }
}
unsafe fn f(d: (*const f64, (f64, f64))) -> f64 {
    let i = core::ptr::addr_of!(d.1 .1) as *mut f64;
    *i -= 1.0;
    d;
    d.1 .1
}
fn main() {
    println!("{}", c());
}
