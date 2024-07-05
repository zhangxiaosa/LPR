fn c() -> bool {
    unsafe { f((&mut (0.0, true), (0.0, false))) }
}

unsafe fn f(d_float_bool_tuple: (*mut (f32, bool), (f64, bool))) -> bool {
    let d_f32_bool_ptr = core::ptr::addr_of!((*d_float_bool_tuple).0 .1) as *mut f32;
    let d_f32_bool_value = (*d_float_bool_tuple).0 .1;
    let d_f64_value = (*d_float_bool_tuple).1 .0;
    let d_f64_bool_value = (*d_float_bool_tuple).1 .1;
    
    *d_f32_bool_ptr = true;
    (d_f32_bool_ptr, d_f32_bool_value, d_f64_value, d_f64_bool_value)
}

fn main() {
    println!("{}", c());
}