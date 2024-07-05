fn c() -> bool {
    let t = (1.0, false);
    unsafe { f(t) }
}

unsafe fn f(d: (f64, bool)) -> bool {
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = true;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}