fn c() -> bool {
    let mut a1: f32 = 0.;
    let mut a2: bool = true;
    let b1: f32 = 0.;
    let b2: bool = false;
    unsafe { f(&mut a1 as *mut f32, (&mut a1, a2), true, true) }
}

unsafe fn f(k: *mut f32, d: (*mut f32, (f64, bool)), g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = g;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}