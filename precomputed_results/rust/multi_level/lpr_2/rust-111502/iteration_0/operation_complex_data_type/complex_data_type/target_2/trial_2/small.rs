fn c() -> bool {
    let mut a_0 = 0.0;
    let mut a_1 = true;
    let b_0 = 0.0;
    let b_1 = false;
    let d_0 = core::ptr::addr_of_mut!(a_0);
    let d_1_0 = 0.0;
    let d_1_1 = false;
    let d_1 = (d_1_0, d_1_1);
    let e = unsafe { f((a_0, a_1), (d_0, d_1), true, true) };
    return e;
}

unsafe fn f(k: (f32, bool), d: (f32, bool, f64, bool), g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!(d.3) as *mut bool;
    let j = g;
    *i = j;
    d;
    return d.3;
}

fn main() {
    println!("{}", c());
}