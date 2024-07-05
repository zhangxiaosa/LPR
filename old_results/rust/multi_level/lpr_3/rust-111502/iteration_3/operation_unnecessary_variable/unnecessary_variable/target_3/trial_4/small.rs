fn c() -> bool {
    unsafe { f((core::ptr::null_mut(), 0.0, false), true) }
}

unsafe fn f(_: (*mut f32, f64, bool), b: bool) -> bool {
    let i = core::ptr::addr_of!(_2) as *mut bool;
    *i = b;
    _2
}

fn main() {
    println!("{}", c());
}