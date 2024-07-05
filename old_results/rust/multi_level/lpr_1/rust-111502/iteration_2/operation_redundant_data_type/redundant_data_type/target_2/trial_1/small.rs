fn c() -> f64 {
    unsafe { f(core::ptr::null_mut(), (&mut 0.0, (0.0, 0.0)), true, true) }
}

unsafe fn f(_: *mut f32, d: (*mut f32, (f64, f64)), g: f64, _: f64) -> f64 {
    let i = core::ptr::addr_of!(d.1.1) as *mut f64;
    *i = g;
    d;
    *i
}

fn main() {
    println!("{}", c());
}