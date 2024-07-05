fn c() -> bool {
    unsafe { f(&mut (0.0, true), (&mut (0.0, true), (0.0, false))) }
}

unsafe fn f(
    k_float_bool: *mut (f32, bool),
    d_float_bool_tuple_ptr: *mut (f32, bool),
) -> bool {
    let second_element_tuple = *d_float_bool_tuple_ptr;
    let i_bool_ptr = core::ptr::addr_of!((second_element_tuple).1) as *mut bool;
    *i_bool_ptr = true;
    second_element_tuple;
    second_element_tuple.1
}

fn main() {
    println!("{}", c());
}