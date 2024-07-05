fn c() -> bool {
    let mut a = 0.;
    let d_1_0 = 0.;
    unsafe { f(&mut a, (&mut a, (d_1_0, false)), true, true) }
}

unsafe fn f(k: *mut f32, d: (*mut f32, (f32, bool)), g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = true;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}
