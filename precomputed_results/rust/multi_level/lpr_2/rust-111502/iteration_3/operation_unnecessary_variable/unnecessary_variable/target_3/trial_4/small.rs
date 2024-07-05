fn c() -> bool {
    unsafe { f(&mut (0.0, true), (&mut (0.0, true), (0.0, false))) }
}

unsafe fn f(
    _k_float_bool: *mut (f32, bool),
    d_float_bool_tuple: (*mut (f32, bool), (f64, bool)),
) -> bool {
    // *i_bool_ptr = true; // Removed this line
    d_float_bool_tuple;
    d_float_bool_tuple.1.1
}

fn main() {
    println!("{}", c());
}