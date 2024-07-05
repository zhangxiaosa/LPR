fn c() -> bool {
    let mut a = (0., true);
    let d = (&mut a, (0.0, false));
    let e = unsafe { f(&mut a, (&mut a, (0.0, false)), true, true) };
    e
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = g;
    d;
    *i
}

fn main() {
    println!("{}", c());
}