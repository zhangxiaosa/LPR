fn c() -> bool {
    let mut a = 0.0;
    let d_0 = core::ptr::addr_of_mut!(a);
    let e = unsafe { f(d_0, (d_0, true, 0.0), true, true) };
    return e;
}

unsafe fn f(k: *mut f32, d: (*mut f32, bool, f64), g: bool, _h: bool) -> bool {
    let i = g;
    *core::ptr::addr_of!(d.3) as *mut bool = i;
    return d.3;
}

fn main() {
    println!("{}", c());
}