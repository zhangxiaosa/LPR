fn c() -> bool {
    let mut d_tuple_float: f64 = 0.0;
    let mut d_bool: bool = false;

    unsafe {
        let mut k_float: f32 = 0.0;
        let mut k_bool: bool = true;
        f(&mut (k_float, k_bool), (&mut (0.0, true), (d_tuple_float, d_bool)))
    }
}

unsafe fn f(
    k_float_bool: *mut (f32, bool),
    d_float_bool_tuple: (*mut (f32, bool), (f64, bool)),
) -> bool {
    let i_bool_ptr = core::ptr::addr_of!(d_float_bool_tuple.1 .1) as *mut bool;
    *i_bool_ptr = true;
    d_float_bool_tuple;
    d_float_bool_tuple.1 .1
}

fn main() {
    println!("{}", c());
}