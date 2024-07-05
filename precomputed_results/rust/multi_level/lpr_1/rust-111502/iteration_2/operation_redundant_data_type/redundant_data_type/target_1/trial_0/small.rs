fn c() -> bool {
    unsafe { f(0.0 as *mut f32, (&mut 0.0, (0.0, false)), true, true) }
}

unsafe fn f(_: f32, d: (*mut f32, (f64, bool)), g: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(d.1) as *mut bool;
    *i = g;
    *i
}

fn main() {
    println!("{}", c());
}