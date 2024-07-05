fn c() -> bool {
    let mut a_0 = 0.0;
    let mut a_1 = true;
    let b = (0., false);
    let d = (core::ptr::addr_of_mut!(a_0), b);
    let e = unsafe { f(d.0, d, true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), d_1: (f64, bool), g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!(d_1.1) as *mut bool;
    let j = g;
    *i = j;
    (d_0, d_1);
    return d_1.1;
}

fn main() {
    println!("{}", c());
}