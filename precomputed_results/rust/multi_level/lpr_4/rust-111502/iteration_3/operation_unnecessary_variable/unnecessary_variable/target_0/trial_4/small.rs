fn c() -> bool {
    let ptr = core::ptr::null_mut();
    let t = (1.0, false);
    unsafe { f((ptr, t)) }
}

unsafe fn f(_d: (*mut f64, (f64, bool))) -> bool {
    let i = core::ptr::addr_of!(_d.1 .1) as *mut bool;
    *i = true;
    true
}

fn main() {
    println!("{}", c());
}