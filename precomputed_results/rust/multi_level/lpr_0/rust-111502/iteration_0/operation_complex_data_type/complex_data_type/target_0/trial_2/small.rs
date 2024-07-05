fn c() -> bool {
    let mut a_0 = 0.;
    let mut a_1 = true;
    let mut a = (a_0, a_1);
    let b_0 = 0.;
    let b_1 = false;
    let b = (b_0, b_1);
    let a_0_addr_mut = core::ptr::addr_of_mut!(a_0) as *mut f32;
    let a_1_addr_mut = core::ptr::addr_of_mut!(a_1) as *mut bool;
    let d_0 = a_0_addr_mut;
    let d_1_0 = b.0;
    let d_1_1_0 = b.1 as f64;
    let d_1_1_1 = b.1;
    let d_1 = (d_1_0, d_1_1_0);
    let d = (d_0, d_1);
    let unsafe_result = unsafe { f(a_0_addr_mut, d, true, true) };
    let e = unsafe_result;
    return e;
}

unsafe fn f(k: *mut f32, d_0: *mut (f32, bool), g: bool, h: bool) -> bool {
    let i = d_0.1 as *mut bool;
    let j = g;
    *i = j;
    d_0;
    return d_0.1;
}

fn main() {
    println!("{}", c());
}