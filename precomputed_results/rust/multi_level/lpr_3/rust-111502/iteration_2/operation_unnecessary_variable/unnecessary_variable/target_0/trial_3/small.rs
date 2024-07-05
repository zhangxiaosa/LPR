fn c() -> bool {
    let mut a = 0.0;
    let e = unsafe { f((&mut a, true, 0.0, false), true, true) };
    return e;
}

unsafe fn f(_: (*mut f32, bool, f64, bool), b: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(a.3) as *mut bool;
    *i = b;
    return a.3;
}

fn main() {
    println!("{}", c());
}