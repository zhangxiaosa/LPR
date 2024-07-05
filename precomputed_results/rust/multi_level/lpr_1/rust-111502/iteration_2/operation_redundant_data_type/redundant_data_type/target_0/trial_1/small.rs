fn c() -> bool {
    unsafe { f(core::ptr::null_mut(), (core::ptr::null_mut(), true), true, true) }
}

unsafe fn f(_: *mut f32, d: (*mut f32, bool), g: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(d.1) as *mut bool;
    *i
}

fn main() {
    println!("{}", c());
}