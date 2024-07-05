fn c() -> bool {
    let a_3 = false;
    let a = (core::ptr::null_mut(), 0.0, a_3);
    unsafe {
        f(a, true);
        f(a, true);
        f(a, true);
    }
    a.2
}

unsafe fn f(a: (*mut f32, f64, bool), b: bool) {
    let i = core::ptr::addr_of!(a.2) as *mut bool;
    *i = b;
}

fn main() {
    println!("{}", c());
}