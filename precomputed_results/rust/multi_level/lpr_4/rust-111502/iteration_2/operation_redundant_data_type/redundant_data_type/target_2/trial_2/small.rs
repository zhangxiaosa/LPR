fn c() -> bool {
    let mut a = (0.0, true);
    unsafe { f(&mut a, ((core::ptr::addr_of_mut!(a), (1.0, false)), true)) }
}

unsafe fn f(_k: *mut ((f64, bool), bool), d: (*mut ((f64, bool), bool), (f64, bool)), g: bool) -> bool {
    let i = core::ptr::addr_of!((d.1).1) as *mut bool;
    *i = g;
    d;
    return (d.1).1;
}

fn main() {
    println!("{}", c());
}