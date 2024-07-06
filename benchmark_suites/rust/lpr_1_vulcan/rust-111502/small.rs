fn c() -> bool {
    unsafe { f(core::ptr::null_mut(), (&mut 0.0, (0.0, false)), true, true) }
}
unsafe fn f(_: *mut bool, d: (*mut f32, (f32, bool)), _: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(d.1) as *mut bool;
    *i ^= true;
    d;
    *i
}
fn main() {
    println!("{}", c());
}
