fn c() -> bool {
    let mut a_0: f32 = 0.;
    let mut a_1: bool = true;
    let b_0: f32 = 0.;
    let b_1: bool = false;
    let d_0 = core::ptr::addr_of_mut!(a_0);
    let d_1 = (b_0, b_1);
    let e = unsafe { f(d_0, (d_0, d_1), true, true) };
    return e;
}

unsafe fn f(k_0: *mut f32, d_0: *mut (f32, bool), g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!((*d_0).1) as *mut bool;
    let j = g;
    *i = j;
    return (*d_0).1;
}

fn main() {
    println!("{}", c());
}