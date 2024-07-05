fn c() -> bool {
    let mut a = (0.0, true);
    unsafe { f(&mut a, (core::ptr::addr_of_mut!(a), (true, false)), true) }
}

unsafe fn f(_k: *mut (f64, bool), d: (*mut (f64, bool), (bool, bool)), g: bool) -> bool {
    let i = core::ptr::addr_of!(d.1 .1) as *mut f64;
    *i = g;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}