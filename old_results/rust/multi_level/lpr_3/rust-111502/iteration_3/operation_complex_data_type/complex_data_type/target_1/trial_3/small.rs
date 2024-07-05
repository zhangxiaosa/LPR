fn c() -> bool {
    let mut a_0: *mut f32 = core::ptr::null_mut();
    let mut a_1: bool = true;
    let mut a_2: f64 = 0.0;
    let mut a_3: bool = false;
    unsafe { f(a_0, a_1, a_2, a_3, true, true) }
}

unsafe fn f(a_0: *mut f32, a_1: bool, a_2: f64, a_3: bool, b: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(a_3) as *mut bool;
    *i = b;
    return a_3;
}

fn main() {
    println!("{}", c());
}