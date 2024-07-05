fn c() -> bool {
    let mut a = 0.0;
    let mut d_0: f32 = a;
    let d_1 = true;
    let d_2: f32 = 0.0;
    let d_3 = false;
    let e = unsafe { f(&mut d_0, (&mut d_0, d_1, d_2.into(), d_3), true, true) };
    return e;
}

unsafe fn f(k: *mut f32, d: (*mut f32, bool, f64, bool), g: bool, _: bool) -> bool {
    let i = core::ptr::addr_of_mut!(d.3) as *mut bool;
    *i = g;
    d;
    return d.3;
}

fn main() {
    println!("{}", c());
}