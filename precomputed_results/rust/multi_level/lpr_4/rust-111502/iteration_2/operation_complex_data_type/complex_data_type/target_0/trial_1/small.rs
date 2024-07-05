fn c() -> bool {
    let mut a_0: f64 = 0.0;
    let mut a_1: bool = true;
    unsafe { f((&mut a_0, &mut a_1), ((core::ptr::addr_of_mut!(a_0), core::ptr::addr_of_mut!(a_1)), (1.0, false)), true) }
}

unsafe fn f(_k_0: *mut f64, _k_1: *mut bool, d_0: *mut (f64, bool), d_1: (f64, bool), g: bool) -> bool {
    let i: *mut bool = core::ptr::addr_of!(d_1.1) as *mut bool;
    *i = g;
    d_1;
    return d_1.1;
}

fn main() {
    println!("{}", c());
}