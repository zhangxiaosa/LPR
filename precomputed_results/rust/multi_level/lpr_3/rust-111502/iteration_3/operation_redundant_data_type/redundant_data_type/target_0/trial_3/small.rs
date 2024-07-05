fn c() -> bool {
    let mut a = 0.0;
    unsafe { f((&mut a, true, 0.0, false), true, true) }
}

unsafe fn f(a: (*mut f64, bool, f64, bool), b: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(a.3) as *mut bool;
    *i = b;
    a;
    return a.3;
}

fn main() {
    println!("{}", c());
}