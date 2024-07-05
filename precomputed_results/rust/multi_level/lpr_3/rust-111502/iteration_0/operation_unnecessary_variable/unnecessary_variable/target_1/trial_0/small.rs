fn c() -> bool {
    let mut a = 0.0;
    let d_0 = core::ptr::addr_of_mut!(a);
    let d_2 = 0.0;
    let d_3 = false;
    let e = unsafe { f(d_0, (d_0, d_2, d_3), true, true) };
    return e;
}

unsafe fn f(k: *mut f32, d: (*mut f32, f64, bool), g: bool, h: bool) -> bool {
    d;
    return d.2;
}

fn main() {
    println!("{}", c());
}