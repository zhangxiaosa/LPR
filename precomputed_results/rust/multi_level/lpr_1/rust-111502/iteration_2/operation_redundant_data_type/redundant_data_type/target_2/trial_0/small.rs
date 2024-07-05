fn c() -> i32 {
    unsafe { f(core::ptr::null_mut(), (&mut 0.0, (0.0, false)), true, true) }
}

unsafe fn f(_: *mut f32, d: (*mut f32, (f64, i32)), g: i32, _: i32) -> i32 {
    let i = core::ptr::addr_of!(d.1) as *mut i32;
    *i = g;
    d;
    *i
}

fn main() {
    println!("{}", c());
}