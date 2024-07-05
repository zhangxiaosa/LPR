fn c() -> bool {
    unsafe { f(core::ptr::null_mut(), (&mut 0.0, (0.0, false)), true, true) }
}

unsafe fn f(_: *mut f32, _: (*mut f32, (f64, bool)), g: bool, _: bool) -> bool {
    g
}

fn main() {
    println!("{}", c());
}