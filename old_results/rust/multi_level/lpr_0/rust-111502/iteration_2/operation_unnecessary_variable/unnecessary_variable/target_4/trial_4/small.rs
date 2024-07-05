fn c() {
    let mut a = 0.0;
    unsafe { f(&mut a, (&mut a, (0.0, false))) }
}

unsafe fn f(k: *mut f32, d: (*mut f32, (f32, bool))) {
    let i = core::ptr::addr_of!(d.1 .1) as *mut bool;
    *i = true;
}

fn main() {
    c();
}