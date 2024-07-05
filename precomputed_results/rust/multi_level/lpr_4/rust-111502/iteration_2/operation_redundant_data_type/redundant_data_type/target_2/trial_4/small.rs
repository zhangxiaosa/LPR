fn c() -> f64 {
    let mut a = (0.0, true);
    unsafe { f(&mut a, (core::ptr::addr_of_mut!(a), (1.0, false)), true) }
}

unsafe fn f(_k: *mut (f64, bool), d: (*mut (f64, bool), (f64, bool)), g: bool) -> f64 {
    let i = core::ptr::addr_of!(d.1 .1) as *mut f64;
    *i = g
    d;
    return d.1 .1 as f64;
}

fn main() {
    println!("{}", c());
}