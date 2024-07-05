fn c() -> f32 {
    let mut a = 0.0;
    unsafe { f((&mut a, (0.0, 0.0))) }
}

unsafe fn f(d: (*mut f32, (f32, f32))) -> f32 {
    let i = core::ptr::addr_of!(d.1 .1) as *mut f32;
    *i = 1.0;
    d;
    return d.1 .1;
}

fn main() {
    println!("{}", c());
}
