fn c() -> bool {
    unsafe { f((core::ptr::null_mut(), (1.0, false))) }
}

unsafe fn f(d: (*mut (f64, bool), (f64, bool))) -> bool {
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}