fn c() -> bool {
    let mut a = 0.;
    let d_1_0 = 0.;
    unsafe { f(&mut a, (&mut a, (d_1_0, false)), true, true) }
}

unsafe fn f(k: *mut f32, d_0: *mut f32, d_1_0: f32, d_1_1: bool, g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!(d_1_1) as *mut bool;
    *i = true;
    d_1_1;
    return d_1_1;
}

fn main() {
    println!("{}", c());
}