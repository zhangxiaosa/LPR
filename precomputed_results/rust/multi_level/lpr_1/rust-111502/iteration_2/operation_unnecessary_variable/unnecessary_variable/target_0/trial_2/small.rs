fn c() -> bool {
    unsafe { f(core::ptr::null_mut(), true) }
}

unsafe fn f(_: *mut f32, g: bool) -> bool {
    let i = core::ptr::addr_of!(g) as *mut bool;
    *i = g;
    *i
}

fn main() {
    println!("{}", c());
}
