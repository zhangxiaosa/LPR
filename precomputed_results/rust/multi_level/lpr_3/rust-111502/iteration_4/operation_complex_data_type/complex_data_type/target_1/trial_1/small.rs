fn c() -> bool {
    let a_3: bool = false;
    unsafe { f((core::ptr::null_mut(), 0.0, a_3), true) }
}

unsafe fn f(a_0: *mut f32, a_1: f64, a_2: bool, b: bool) -> bool {
    let i: *mut bool = core::ptr::addr_of!(a_2) as *mut bool;
    *i = b;
    (a_0, a_1, a_2);
    a_2
}

fn main() {
    println!("{}", c());
}