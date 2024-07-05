fn c() -> bool {
    let mut a_0: f32 = 0.;
    let mut a_1: bool = true;
    let b_0: f32 = 0.;
    let b_1: bool = false;
    unsafe { f(&mut a_0, (&mut a_0, (b_0 as f64, b_1)), true, true) }
}

unsafe fn f(k: *mut f32, d: (*mut f32, (f64, bool)), g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!(d.1.1) as *mut bool;
    *i = g;
    d;
    return d.1.1;
}

fn main() {
    println!("{}", c());
}