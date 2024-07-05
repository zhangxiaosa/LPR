fn c() -> f64 {
    let mut a = 0.0;
    unsafe {
        let mut d_0 = &mut a as *mut f64;
        let mut d_1_0 = 0.0;
        let mut d_1_1 = 0.0;
        let mut d = (d_0, (d_1_0, d_1_1));
        f(d)
    }
}

unsafe fn f(d: (*mut f64, (f64, f64))) -> f64 {
    let i = core::ptr::addr_of!(d.1 .1) as *mut f64;
    *i = 1.0;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}