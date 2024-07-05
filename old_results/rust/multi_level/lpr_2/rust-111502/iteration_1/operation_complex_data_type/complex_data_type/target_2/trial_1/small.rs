fn c() -> bool {
    let mut a_0 = 0.;
    let a_1 = true;
    let b_0 = 0.;
    let b_1 = false;
    let mut a = (a_0, a_1);
    unsafe { f(&mut a, (&mut a, (b_0, b_1)), true, true) }
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = g;
    let d_1_0 = (d.1).0;
    let d_1_1 = (d.1).1;
    let d = (*mut (f32, bool), (d_1_0, d_1_1));
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}