fn c() -> bool {
    let b_0 = 0.0;
    let b_1 = false;
    unsafe { f(core::ptr::addr_of!((b_0, b_1)).1, ((core::ptr::addr_of!((b_0, b_1)), (b_0, b_1)), (b_0, b_1)), true, true) }
}

unsafe fn f(k: *mut (f32, bool), d: (*mut (f32, bool), (f64, bool)), g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = g;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}