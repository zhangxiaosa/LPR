fn c() -> bool {
    let mut a = 0.0;
    let d_0 = core::ptr::addr_of_mut!(a);
    let e = unsafe { f(d_0, (d_0, true, 0.0, false), true, true) };
    return e;
}

unsafe fn f(k: *mut f32, _: (*mut f32, bool, f64, bool), g: bool, _: bool) -> bool {
    let i = k as *mut bool;
    *i = g;
    return g;
}

fn main() {
    println!("{}", c());
}