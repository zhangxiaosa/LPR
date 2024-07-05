fn c() -> bool {
    let mut a_float = 0.0;
    let mut a_bool = true;
    let e = unsafe { f(&mut a_float, &mut a_bool, (&mut a_float, (0.0, false)), true, true) };
    e
}

unsafe fn f(_: *mut f32, _: *mut bool, d: (*mut f32, (f64, bool)), g: bool, _: bool) -> bool {
    let i = core::ptr::addr_of!(d.1) as *mut bool;
    *i = g;
    d;
    *i
}

fn main() {
    println!("{}", c());
}