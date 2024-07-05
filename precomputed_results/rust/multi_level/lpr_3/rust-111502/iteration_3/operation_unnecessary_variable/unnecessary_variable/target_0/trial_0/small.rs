fn c() -> bool {
    let a_1 = true;
    let a_2 = 0.0;
    let a_3 = false;
    unsafe { f((core::ptr::null_mut(), a_1, a_2, a_3), true, true) }
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