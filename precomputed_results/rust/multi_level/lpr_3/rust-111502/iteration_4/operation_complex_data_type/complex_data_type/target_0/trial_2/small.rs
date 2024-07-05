fn c() -> bool {
    let a_0 = core::ptr::null_mut();
    let a_1 = 0.0;
    let a_2 = false;
    unsafe { f(a_0, a_1, a_2, true) }
}

unsafe fn f(a_0: *mut f32, a_1: f64, a_2: bool, b: bool) -> bool {
    let i = core::ptr::addr_of!(a_2) as *mut bool;
    *i = b;
    (a_0, a_1, a_2);
    a_2
}

fn main() {
    println!("{}", c());
}