fn c() -> bool {
    let mut f_float_bool_tuple: (f32, bool) = (0.0, true);
    let mut s_float_bool_tuple: (f64, bool) = (0.0, false);
    unsafe { f((&mut f_float_bool_tuple, s_float_bool_tuple)) }
}

unsafe fn f(d_float_bool_tuple: (*mut (f32, bool), (f64, bool))) -> bool {
    let i_bool_ptr = core::ptr::addr_of!((*d_float_bool_tuple).1 .1) as *mut bool;
    *i_bool_ptr = true;
    *d_float_bool_tuple;
    (*d_float_bool_tuple).1 .1
}

fn main() {
    println!("{}", c());
}