fn c() -> bool {
    unsafe { f((core::ptr::null_mut(), 0.0), true) }
}

unsafe fn f(a: (*mut f32, f64), b: bool) -> bool {
    let i = core::ptr::addr_of!(a.1) as *mut bool;
    *i = b;
    a;
    a.1
}

fn main() {
    println!("{}", c());
}