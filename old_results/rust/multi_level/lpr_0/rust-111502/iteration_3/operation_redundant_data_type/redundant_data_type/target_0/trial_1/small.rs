fn c() -> bool {
    let mut a: f32 = 0.0;
    unsafe { f((&mut a as *mut f32, (0.0, false))) }
}

unsafe fn f(d: (*mut f32, (f32, bool))) -> bool {
    let i: *mut bool = core::ptr::addr_of!(d.1.1);
    *i = true;
    return d.1.1;
}

fn main() {
    println!("{}", c());
}