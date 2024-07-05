fn c() -> bool {
    unsafe {
        f(
            &mut (0.0, true),
            (&mut (0.0, true), (0.0, false)),
            true,
            true,
        )
    }
}
unsafe fn f(
    k_float_bool: *mut (f32, bool),
    d_float_bool_tuple: (*mut (f32, bool), (f64, bool)),
    g: bool,
    _: bool,
) -> bool {
    let i_bool_ptr = core::ptr::addr_of!(d_float_bool_tuple.1 .1) as *mut bool;
    *i_bool_ptr = true;
    d_float_bool_tuple;
    d_float_bool_tuple.1 .1
}
fn main() {
    println!("{}", c());
}
