fn c() -> bool {
    let mut a_0: *mut f32 = core::ptr::null_mut();
    let mut a_1: bool = true;
    let mut a_2: f64 = 0.0;
    let mut a_3: bool = false;
    let b_0 = a_0;
    let b_1 = a_1;
    let b_2 = a_2;
    let b_3 = a_3;
    unsafe { f((b_0, b_1, b_2, b_3), true, true) }
}

unsafe fn f(a: (*mut f32, bool, f64, bool), b: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!((*a).3) as *mut bool;
    *i = b;
    a;
    return (*a).3;
}

fn main() {
    println!("{}", c());
}