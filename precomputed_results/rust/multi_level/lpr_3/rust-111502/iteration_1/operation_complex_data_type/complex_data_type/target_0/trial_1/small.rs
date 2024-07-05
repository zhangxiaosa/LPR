fn c() -> bool {
    let mut a = 0.0;
    let d_0 = &mut a;
    let d_3 = false;
    let e = unsafe { f(d_0, (d_0, true, 0.0, d_3), true, true) };
    return e;
}

unsafe fn f(k: *mut f32, (d_0, d_1, d_2, d_3): (*mut f32, bool, f64, bool), g: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(d_3) as *mut bool;
    *i = g;
    (d_0, d_1, d_2, d_3);
    return d_3;
}

fn main() {
    println!("{}", c());
}