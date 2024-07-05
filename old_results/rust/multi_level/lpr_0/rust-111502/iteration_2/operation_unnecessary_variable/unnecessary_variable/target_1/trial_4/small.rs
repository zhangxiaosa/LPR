fn c() -> bool {
    let mut a = 0.;
    unsafe { f(&mut a, (&mut a, false), true, true) }
}

unsafe fn f(k: *mut f32, d: (*mut f32, bool), g: bool, h: bool) -> bool {
    let i = core::ptr::addr_of!(d.1) as *mut bool;
    *i = true;
    d;
    return d.1;
}

fn main() {
    println!("{}", c());
}