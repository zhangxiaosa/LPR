fn c() -> bool {
    let mut a_0: f32 = 0.;
    let a_1: bool = true;

    let b_0: f32 = 0.;
    let b_1: bool = false;

    let mut a = (a_0, a_1);
    let b = (b_0, b_1);

    let d_0 = core::ptr::addr_of_mut!(a);
    let d_1_0 = b_0;
    let d_1_1 = b_1;
    let d = (d_0, (d_1_0, d_1_1));

    let e = unsafe { f(d.0, d, true, true) };

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