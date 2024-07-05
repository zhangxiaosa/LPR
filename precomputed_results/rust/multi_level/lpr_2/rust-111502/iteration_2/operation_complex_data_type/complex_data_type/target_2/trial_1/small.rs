fn c() -> bool {
    unsafe {
        let mut k_float_bool = (0.0, true);
        let k_float_bool_ptr = &mut k_float_bool as *mut (f32, bool);

        let d_float_bool_tuple_float = (0.0, true);
        let d_float_bool_tuple = (k_float_bool_ptr, d_float_bool_tuple_float);

        f(k_float_bool_ptr, d_float_bool_tuple, true, true)
    }
}

unsafe fn f(
    k_float_bool: *mut (f32, bool),
    (k_float_bool_ptr, (d_float, bool_tuple_1)): (*mut (f32, bool), (f64, bool)),
    g: bool,
    _: bool,
) -> bool {
    let i_bool_ptr = &mut bool_tuple_1 as *mut bool;
    *i_bool_ptr = true;
    (k_float_bool_ptr, (d_float, bool_tuple_1));
    bool_tuple_1
}

fn main() {
    println!("{}", c());
}