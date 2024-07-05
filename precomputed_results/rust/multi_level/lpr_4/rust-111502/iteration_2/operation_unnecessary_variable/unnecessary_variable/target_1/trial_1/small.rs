fn c() -> bool {
    unsafe { f(((core::ptr::addr_of_mut![(0.0, true)] as *mut (f64, bool)), (1.0, false)), true) }
}

unsafe fn f(d: (*mut (f64, bool), (f64, bool)), g: bool) -> bool {
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = g;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}