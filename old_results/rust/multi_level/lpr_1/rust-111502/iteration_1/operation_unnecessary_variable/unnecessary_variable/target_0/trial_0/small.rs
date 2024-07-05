fn c() -> bool {
    let e = unsafe { f(&mut 0.0, (&mut 0.0, (0.0, false)), true, true) };
    e
}

unsafe fn f(_: *mut f32, d: (*mut f32, (f64, bool)), g: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(d.1) as *mut bool;
    *i = g;
    *i
}

fn main() {
    println!("{}", c());
}