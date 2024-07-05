fn c() -> bool {
    let mut a0: f64 = 0.0;
    let mut a1: bool = true;
    unsafe { f(&mut a0, &mut a1, (core::ptr::addr_of_mut!(a0), (1.0, false)), true) }
}

unsafe fn f(_k: *mut f64, _l: *mut bool, d: (*mut f64, (f64, bool)), g: bool) -> bool {
    let i = core::ptr::addr_of!((*d).1.1) as *mut bool;
    *i = g;
    d;
    return (*d).1.1;
}

fn main() {
    println!("{}", c());
}