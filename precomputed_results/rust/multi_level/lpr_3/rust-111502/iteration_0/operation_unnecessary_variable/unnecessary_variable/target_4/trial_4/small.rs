fn c() -> bool {
    let mut a = 0.0;
    let d_0 = &mut a;
    let d_3 = false;
    let e = unsafe { f(d_0, (d_0, true, 0.0, d_3), true, true) };
    return e;
}

unsafe fn f(k: *mut f32, d: (*mut f32, bool, f64, bool), g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!(d.3) as *mut bool;
    let j = g;
    *i = j;
    d;
    return d.3;
}

fn main() {
    println!("{}", c());
}