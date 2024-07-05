fn c() -> bool {
    let mut a = (0., true);
    let d = (&mut a, (0.0, false));
    unsafe { f(&mut a, (&mut a, (0.0, false)), true, true) };
    return a.1;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    *core::ptr::addr_of!(d.1 .1) = g;
    d;
    return *core::ptr::addr_of!(d.1 .1);
}

fn main() {
    println!("{}", c());
}