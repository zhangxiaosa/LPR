fn c() -> bool {
    let mut a: f32 = 0.0;
    let d_0 = core::ptr::addr_of_mut!(a) as *mut f32;
    let d_1: bool = true;
    let d_2: f64 = 0.0;
    let d_3: bool = false;
    let e = unsafe { f(d_0, (d_0, d_1, d_2, d_3), true, true) };
    return e;
}

unsafe fn f(k: *mut f32, d: (*mut f32, bool, f64, bool), g: bool, h: bool) -> bool {
    let i: *mut bool = core::ptr::addr_of!(d.3) as *mut bool;
    let j: bool = g;
    *i = j;
    d;
    return d.3;
}

fn main() {
    println!("{}", c());
}
