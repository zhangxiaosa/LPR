fn c() -> bool {
    let mut a: f32 = 0.0;
    let e = unsafe { f((&mut a as *mut f32, true, 0.0, false), true, true) };
    return e;
}

unsafe fn f(a: (*mut f32, bool, f64, bool), b: bool, _: bool) -> bool {
    let i_ptr = core::ptr::addr_of!(a.3) as *mut bool;
    let i = *i_ptr;
    *i_ptr = b;
    let a_tuple = a;
    let a_value = a.3;
    return a_value;
}

fn main() {
    println!("{}", c());
}