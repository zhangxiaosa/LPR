fn c() -> bool {
    let mut a_1 = 0.;
    let mut a_2 = true;
    let b_1 = 0.;
    let b_2 = false;
    let mut d_1 = core::ptr::addr_of_mut!(a_1) as *mut f32;
    let mut d_2_1 = 0.;
    let mut d_2_2 = false;
    let d_1_1 = &mut d_1;
    let d_2 = (d_2_1, d_2_2);
    let mut e = unsafe { f(d_1_1, (d_1, d_2), true, true) };
    return e;
}

unsafe fn f(k_1: *mut f32, d_1: (*mut f32, (f64, bool)), g: bool, h: bool) -> bool {
    let mut i_1 = core::ptr::addr_of!(d_1.1.1) as *mut bool;
    let j = g;
    *i_1 = j;
    return d_1.1.1;
}

fn main() {
    println!("{}", c());
}