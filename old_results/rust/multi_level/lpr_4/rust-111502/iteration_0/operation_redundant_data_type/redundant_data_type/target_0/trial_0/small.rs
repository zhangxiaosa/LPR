fn c() -> bool {
    let mut a = (0.0, true, 0.0, true);
    let b = (0.0, false, 0.0, false);
    let d = (core::ptr::addr_of_mut!(a) as *mut (f32, bool), b.0, b.1);
    let e = unsafe { f(d.0, (d.1, d.2, d.3), true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f32, bool), f64, bool), g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!(((d.1).2) .1) as *mut bool;
    let j = g;
    *i = j;
    (d.0, (d.1.0, d.1.1, d.1.2, d.1.3));
    return (d.1).1;
}

fn main() {
    println!("{}", c());
}