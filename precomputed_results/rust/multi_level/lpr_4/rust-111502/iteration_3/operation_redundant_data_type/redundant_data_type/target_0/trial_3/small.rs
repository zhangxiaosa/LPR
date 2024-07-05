fn c() -> bool {
    unsafe { f((std::ptr::null_mut(), (1.0, false))) }
}

fn f(d: (*mut f64, (f64, bool))) -> bool {
    let i = std::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = true;
    d.1 .1
}

fn main() {
    println!("{}", c());
}