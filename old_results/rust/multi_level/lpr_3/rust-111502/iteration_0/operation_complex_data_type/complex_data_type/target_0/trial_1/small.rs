fn c() -> bool {
    let mut a = 0.;
    let addr_of_a = core::ptr::addr_of_mut!(a);
    let d_0 = addr_of_a;
    let d_1 = true;
    let d_2 = 0.0;
    let d_3 = false;
    let d = (d_0, d_1, d_2, d_3);
    let e = unsafe { f(d_0, d, true, true) };
    return e;
}

unsafe fn f(k: *mut f32, d_0: *mut f32, d_1: bool, d_2: f64, d_3: bool, g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!(d_3) as *mut bool;
    let j = g;
    *i = j;
    d_3;
    return d_3;
}

fn main() {
    println!("{}", c());
}