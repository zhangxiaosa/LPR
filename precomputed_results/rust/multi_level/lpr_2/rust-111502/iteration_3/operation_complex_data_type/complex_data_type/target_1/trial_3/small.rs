fn c() -> bool {
    let mut d_tuple_float_0: f32 = 0.0;
    let mut d_bool_0: bool = false;
    let mut d_tuple_float_1: f64 = 0.0;
    let mut d_bool_1: bool = false;

    unsafe {
        f(
            &mut (d_tuple_float_0, d_bool_0),
            (
                &mut (d_tuple_float_0, d_bool_0),
                (d_tuple_float_1, d_bool_1),
            ),
        )
    }
}

unsafe fn f(
    k_float_bool: *mut (f32, bool),
    d_float_bool_tuple: (*mut (f32, bool), (f64, bool)),
) -> bool {
    let i_bool_ptr = core::ptr::addr_of!((*d_float_bool_tuple).1).1 as *mut bool;
    *i_bool_ptr = true;
    d_float_bool_tuple;
    (*d_float_bool_tuple).1.1
}

fn main() {
    println!("{}", c());
}