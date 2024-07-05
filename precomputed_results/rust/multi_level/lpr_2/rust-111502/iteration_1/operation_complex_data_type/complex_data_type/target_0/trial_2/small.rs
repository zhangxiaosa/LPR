fn c() -> bool {
    let mut a_f32 = 0.;
    let mut a_bool = true;
    let b = (0., false);
    unsafe { f(&mut a_f32, &mut a_bool, (&mut a_f32, b), true, true) }
}

unsafe fn f(
    k: *mut f32,
    a: *mut bool,
    d: (*mut f32, (*mut f32, (f64, bool))),
    g: bool,
    h: bool,
) -> bool {
    let i = core::ptr::addr_of!(d.1.1) as *mut bool;
    *i = g;
    d;
    return d.1.1;
}

fn main() {
    println!("{}", c());
}