fn c() -> bool {
    let a_3 = false;
    let a = (core::ptr::null_mut(), 0.0, a_3);
    unsafe { f(a, true) }
}

unsafe fn f(a: (*mut f32, f64, bool), b: bool) -> bool {
    let i: *mut bool = core::ptr::addr_of!(a.2) as *mut bool; // Decomposed i
    *i = b;
    a;
    a.2
}

fn main() {
    println!("{}", c());
}