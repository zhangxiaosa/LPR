fn c() -> bool {
    let mut a_0 = 0.;
    let mut a_1 = true;
    let b_0 = 0.;
    let b_1 = false;
    let d_ptr = core::ptr::addr_of_mut!((a_0, a_1));
    let d_tuple_0 = b_0;
    let d_tuple_1 = b_1;
    let e = unsafe { f(d_ptr, ((d_ptr, (d_tuple_0, d_tuple_1))), true, true) };
    return e;
}

unsafe fn f(k_0: *mut f32, k_1: *mut bool, d_0: *mut f32, d_1: *mut bool, g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!(d_1) as *mut bool;
    *i = g;
    (d_0, d_1);
    return *d_1;
}

fn main() {
    println!("{}", c());
}