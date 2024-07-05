fn c() -> bool {
    let mut a = 0.0;
    let e = unsafe { f(&mut a, (&mut a, true, 0.0), true, true) };
    return e;
}

unsafe fn f(k: *mut f32, _: (*mut f32, bool, f64), g: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(d.3) as *mut bool;
    *i = g;
    return d.3;
}

fn main() {
    println!("{}", c());
}