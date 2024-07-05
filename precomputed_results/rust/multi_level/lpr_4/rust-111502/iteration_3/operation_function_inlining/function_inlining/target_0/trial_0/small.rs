fn c() -> bool {
    let d: (*mut f64, (f64, bool)) = (core::ptr::null_mut(), (1.0, false));
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = true;
    d.1 .1
}

fn main() {
    println!("{}", c());
}