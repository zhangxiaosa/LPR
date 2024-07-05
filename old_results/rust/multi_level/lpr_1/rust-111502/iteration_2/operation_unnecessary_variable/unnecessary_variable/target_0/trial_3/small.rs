fn c() -> bool {
    unsafe { f(core::ptr::null_mut(), (core::ptr::null_mut(), (0.0, false)), true, true) }
}

unsafe fn f(_: *mut f32, d: (*mut f64, (f64, bool)), g: bool, _: bool) -> bool {
    *(&mut d.1 as *mut bool) = g;
    d;
    *(&mut d.1 as *mut bool)
}

fn main() {
    println!("{}", c());
}