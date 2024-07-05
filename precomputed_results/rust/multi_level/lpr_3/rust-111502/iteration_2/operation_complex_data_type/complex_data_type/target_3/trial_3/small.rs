fn c() -> bool {
    let mut a_ptr: *mut f32 = core::ptr::null_mut();
    let a_bool: bool = true;
    let a_f64: f64 = 0.0;
    let mut a_bool2: bool = false;

    let e = unsafe { f((&mut a_ptr, a_bool, a_f64, a_bool2), true, true) };
    return e;
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