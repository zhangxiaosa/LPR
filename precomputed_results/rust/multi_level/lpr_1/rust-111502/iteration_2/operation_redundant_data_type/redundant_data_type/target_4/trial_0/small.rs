fn c() -> bool {
    unsafe { f(core::ptr::null_mut(), (&mut 0.0f32, (0.0f64, false)), true, true) }
}

unsafe fn f(_: *mut f32, d: (*mut f32, (bool, bool)), g: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(d.1.1) as *mut bool;
    *i = g;
    *i
}

fn main() {
    println!("{}", c());
}