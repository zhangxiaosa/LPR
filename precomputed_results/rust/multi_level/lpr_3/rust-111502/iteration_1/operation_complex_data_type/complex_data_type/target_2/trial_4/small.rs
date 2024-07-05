fn c() -> bool {
    let mut a: f64 = 0.0;
    let mut d_0: &mut f64 = &mut a;
    let mut d_1: bool = true;
    let mut d_2: f64 = 0.0;
    let mut d_3: bool = false;
    let e: bool = unsafe { f(d_0, (d_0, d_1, d_2, d_3), true, true) };
    return e;
}

unsafe fn f(k: *mut f32, d: (*mut f32, bool, f64, bool), g: bool, _: bool) -> bool {
    let mut i: *mut bool = core::ptr::addr_of!(d.3) as *mut bool;
    *i = g;
    d;
    return d.3;
}

fn main() {
    println!("{}", c());
}