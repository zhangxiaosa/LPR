fn c() -> bool {
    unsafe { f(&mut (0.0, true), (&mut (0.0, true), (0.0, false)), true) }
}

unsafe fn f(
    k_float_bool: *mut (f32, bool),
    _: (*mut (f32, bool), (f64, bool)),
    g: bool,
) -> bool {
    let i_bool_ptr = core::ptr::addr_of!(0.0, false).1 as *mut bool;
    *i_bool_ptr = true;
    (&mut (0.0, true), (0.0, false));
    (0.0, false).1
}

fn main() {
    println!("{}", c());
}