fn c() -> bool {
    let mut a = (0.0_original, true);
    unsafe { f(&mut a, (core::ptr::addr_of_mut!(a), (1.0_original, false)), true) }
}

unsafe fn f(_k: *mut (f64_original, bool), d: (*mut (f64_original, bool), (f64_original, bool)), g: bool) -> bool {
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = g;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}