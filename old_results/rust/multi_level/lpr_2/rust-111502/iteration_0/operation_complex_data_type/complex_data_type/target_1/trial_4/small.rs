fn c() -> bool {
    let mut a_0 = 0.;
    let mut a_1 = true;
    let b_0 = 0.;
    let b_1 = false;
    let mut d_0 = core::ptr::addr_of_mut!(a_0);
    let mut d_1_0 = 0.;
    let mut d_1_1 = false;
    let d_1 = (d_1_0, d_1_1);
    let e = unsafe { f(d_0, (d_0, d_1), true, true) };
    return e;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let mut i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    let mut j = g;
    *i = j;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}