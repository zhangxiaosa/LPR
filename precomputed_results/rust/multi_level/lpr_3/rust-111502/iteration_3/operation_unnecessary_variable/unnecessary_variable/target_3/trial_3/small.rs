fn c() -> bool {
    unsafe { f((core::ptr::null_mut(), 0.0, false), true) }
}

unsafe fn f(a: (*mut f32, f64, bool), b: bool) -> bool {
    let i = core::ptr::addr_of!(a.2) as *mut bool;
    *i = b;
    a.2
}

fn main() {
    println!("{}", c());
}