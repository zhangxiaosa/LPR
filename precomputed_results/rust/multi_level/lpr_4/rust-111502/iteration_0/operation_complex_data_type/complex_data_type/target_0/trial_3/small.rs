fn c() -> bool {
    let mut a_0 = 0.;
    let mut a_1 = true;
    let mut a = (a_0, a_1);
    let b_0 = 0.;
    let b_1 = false;
    let b = (b_0, b_1);
    let d_0 = core::ptr::addr_of_mut!(a_0);
    let d_1 = b;
    let d = (d_0, d_1);
    let e = unsafe { f(d_0, d, true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let d_1_0 = *(d.1).0;
    let d_1_1 = (d.1).1;
    let i = core::ptr::addr_of!((d_1_0).1) as *mut bool;
    let j = g;
    *i = j;
    d;
    return d_1_1;
}

fn main() {
    println!("{}", c());
}