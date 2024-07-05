fn c() -> bool {
    let mut a = (0.0 as f64, true);
    unsafe { f(&mut a, (core::ptr::addr_of_mut!(a), (1.0 as f64, false)), true) }
}

unsafe fn f(_k: *mut (f64, bool), d: (*mut (f64, bool), (f64, bool)), g: bool) -> bool {
    let i = core::ptr::addr_of!((*d.1).1) as *mut bool;
    *i = g;
    let _ = d;
    d.1.1
}

fn main() {
    println!("{}", c());
}