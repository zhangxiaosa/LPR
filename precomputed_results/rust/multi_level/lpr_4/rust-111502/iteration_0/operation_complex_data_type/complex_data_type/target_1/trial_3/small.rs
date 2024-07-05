fn c() -> bool {
    let mut a_0: f32 = 0.0;
    let mut a_1: bool = true;
    let b_0: f32 = 0.0;
    let b_1: bool = false;
    let d_0: *mut (f32, bool) = core::ptr::addr_of_mut!(a);
    let d_1: (f32, bool) = b;
    let e_0: bool = unsafe { f(d_0, d_1, true, true) };
    return e_0;
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i: *mut bool = core::ptr::addr_of!(d_1.1);
    let j: bool = g;
    *i = j;
    d;
    return d.1.1;
}

fn main() {
    println!("{}", c());
}