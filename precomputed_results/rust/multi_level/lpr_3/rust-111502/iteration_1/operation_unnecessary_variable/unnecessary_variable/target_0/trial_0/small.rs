fn c() -> bool {
    let mut a = 0.0;
    let c = 0.0;
    let d = false;
    let e = unsafe { f(&mut a, (&mut a, true, c, d), true, true) };
    return e;
}

unsafe fn f(k: *mut f32, d: (*mut f32, bool, f64, bool), g: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(d.3) as *mut bool;
    *i = g;
    d;
    return d.3;
}

fn main() {
    println!("{}", c());
}