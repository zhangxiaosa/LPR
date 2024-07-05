fn c() -> f64 {
    unsafe { f((&mut 0.0, (0.0, 0.0))) }
}

unsafe fn f(d: (*mut f64, (f64, f64))) -> f64 {
    let (d_0, (d_1_0, d_1_1)) = d;
    let i = core::ptr::addr_of!(d_1_1) as *mut f64;
    *i = 1.0;
    (d_0, (d_1_0, d_1_1));
    return d_1_1;
}

fn main() {
    println!("{}", c());
}