fn c() -> bool {
    let mut a = 0.;
    let d_1_0 = 0.;
    let d = (&mut a, (d_1_0, false));
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = true;
    return d.1 .1;
}