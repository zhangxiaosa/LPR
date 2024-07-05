fn c() -> bool {
    let e = unsafe { f(core::ptr::null_mut(), (core::ptr::null_mut(), (0.0, false)), true, true) };
    e
}

unsafe fn f(_: *mut f32, _: (*mut f32, (f64, bool)), g: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(g) as *mut bool;
    *i = g;
    *i
}

fn main() {
    println!("{}", c());
}