fn c() -> bool {
    let mut a_0 = 0.0;
    let mut a_1 = true;
    let b = (0., false);
    let d_0 = core::ptr::addr_of_mut!(a_0);
    let d_1 = b;
    let e = unsafe { f(d_0, (d_0, d_1), true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    let j = g;
    *i = j;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}