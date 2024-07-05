fn c() -> bool {
    let mut a = 0.0;
    let e = unsafe { f((&mut a, true, 0.0, false), true, true) };
    return e;
}

unsafe fn f(d: (*mut f32, bool, f64, bool), g: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(d.3) as *mut bool;
    *i = g;
    d;
    return d.3;
}

fn main() {
    println!("{}", c());
}
