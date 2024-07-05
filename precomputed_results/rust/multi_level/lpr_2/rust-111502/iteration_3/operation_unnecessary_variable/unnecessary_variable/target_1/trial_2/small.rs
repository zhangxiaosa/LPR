fn c() -> bool {
    let d_tuple_float = 0.0;
    f(&mut (0.0, true), (&mut (0.0, true), (d_tuple_float, false)))
}

unsafe fn f(
    k_float_bool: *mut (f32, bool),
    _: (*mut (f32, bool), (f64, bool)),
) -> bool {
    let i_bool_ptr = core::ptr::addr_of!(0.0, false).1 .1 as *mut bool;
    *i_bool_ptr = true;
    (0.0, false).1 .1
}

fn main() {
    println!("{}", c());
}