fn c() -> bool {
    let mut a = 0.0;
    let d_0 = core::ptr::addr_of_mut!(a);
    let e = unsafe { f(d_0, (d_0, true, 0.0), true) };
    return e;
}

unsafe fn f(k: *mut f32, d: (*mut f32, bool, f64), g: bool) -> bool {
    let i = core::ptr::addr_of!(d.2) as *mut bool;
    let j = g;
    *i = j;
    d;
    return d.2;
}

fn main() {
    println!("{}", c());
}