fn c() -> bool {
    unsafe { f(core::ptr::null_mut(), (&mut 0.0, (0.0, false)), true, true) }
}

unsafe fn f(_: *mut f32, d: (*mut f32, (f64, bool)), g: bool, _: bool) -> bool {
    *(&mut d.1.1) = g;
    d;
    d.1.1
}

fn main() {
    println!("{}", c());
}