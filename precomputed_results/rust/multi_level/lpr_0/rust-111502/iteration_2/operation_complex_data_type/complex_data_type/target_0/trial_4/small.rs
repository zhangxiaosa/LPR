fn c() -> bool {
    let mut a = 0.;
    let d_1_0 = 0.;
    unsafe { f(&mut a, (&mut a, (d_1_0, false)), true, true) }
}

unsafe fn f(k: *mut f32, d: (*mut f32, (f32, bool)), g: bool, h: bool) -> bool {
    let d_0 = d.0;
    let d_1_0 = d.1 .0;
    let d_1_1 = d.1 .1;
    let i = core::ptr::addr_of!(d_1_1) as *mut bool;
    *i = true;
    d;
    return d_1_1;
}

fn main() {
    println!("{}", c());
}