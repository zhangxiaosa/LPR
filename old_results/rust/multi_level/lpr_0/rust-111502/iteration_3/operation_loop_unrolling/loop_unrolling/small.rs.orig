fn c() -> bool {
    let mut a = 0.;
    unsafe { f((&mut a, (0., false))) }
}
unsafe fn f(d: (*mut f32, (f32, bool))) -> bool {
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = true;
    d;
    return d.1 .1;
}
fn main() {
    println!("{}", c());
}
