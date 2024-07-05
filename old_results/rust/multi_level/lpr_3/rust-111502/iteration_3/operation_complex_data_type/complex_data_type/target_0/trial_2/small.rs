fn c() -> bool {
    let mut a_ptr: *mut f32 = std::ptr::null_mut();
    let mut a_1: bool = true;
    let mut a_2: f64 = 0.0;
    let mut a_3: bool = false;
    unsafe { f((a_ptr, a_1, a_2, a_3), true, true) }
}

unsafe fn f(a: (*mut f32, bool, f64, bool), b: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(a.3) as *mut bool;
    *i = b;
    a;
    return a.3;
}

fn main() {
    println!("{}", c());
}