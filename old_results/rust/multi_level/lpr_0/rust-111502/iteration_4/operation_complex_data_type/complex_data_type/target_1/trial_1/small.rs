fn c() -> f64 {
    unsafe { f((&mut 0.0, (0.0, 0.0))) }
}

unsafe fn f(d_0: *mut f64, d_1_0: f64, d_1_1: f64) -> f64 {
    let i = core::ptr::addr_of!(d_1_1) as *mut f64;
    *i = 1.0;
    d_1_1;
}

fn main() {
    println!("{}", c());
}