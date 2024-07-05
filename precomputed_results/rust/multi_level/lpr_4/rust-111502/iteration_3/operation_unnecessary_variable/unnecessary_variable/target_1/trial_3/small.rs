fn c() -> bool {
    let ptr = core::ptr::null_mut();
    let t = (1.0, false);
    unsafe { f((ptr, t)) }
}

unsafe fn f(d: (*mut f64, (f64, bool))) -> bool {
    true
}

fn main() {
    println!("{}", c());
}