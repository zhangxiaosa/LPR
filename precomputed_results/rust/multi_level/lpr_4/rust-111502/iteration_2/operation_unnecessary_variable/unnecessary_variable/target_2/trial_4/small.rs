fn c() -> bool {
    unsafe { f((core::ptr::null_mut(), (1.0, false)), true) }
}

unsafe fn f(d: (*mut (f64, bool), (f64, bool)), g: bool) -> bool {
    g
}

fn main() {
    println!("{}", c());
}