fn main() {
    let mut k_float_bool_tuple = (0.0, true);
    let mut d_float_bool_tuple_f32_bool = (0.0, true);
    let mut d_float_bool_tuple_f64_bool = (0.0, false);
    let k_float_bool_ptr = &mut k_float_bool_tuple as *mut (f32, bool);
    let d_float_bool_tuple_ptr = (&mut d_float_bool_tuple_f32_bool, d_float_bool_tuple_f64_bool);

    unsafe { f(k_float_bool_ptr, d_float_bool_tuple_ptr) };
}

unsafe fn f(
    k_float_bool: *mut (f32, bool),
    d_float_bool_tuple: (*mut (f32, bool), (f64, bool)),
) -> bool {
    let i_bool_ptr = core::ptr::addr_of!((*d_float_bool_tuple).1 .1) as *mut bool;
    *i_bool_ptr = true;
    d_float_bool_tuple;
    (*d_float_bool_tuple).1 .1
}