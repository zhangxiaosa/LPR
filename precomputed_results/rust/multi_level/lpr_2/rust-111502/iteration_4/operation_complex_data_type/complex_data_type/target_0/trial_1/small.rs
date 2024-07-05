fn c() -> bool {    
    unsafe { f((&mut (0.0, true), (0.0, false))) }    
}    
    
unsafe fn f(float_bool_tuple_ptr: *mut (f32, bool), f64_bool_tuple: (f64, bool)) -> bool {    
    let i_bool_ptr = core::ptr::addr_of!((*float_bool_tuple_ptr).1) as *mut bool;    
    *i_bool_ptr = true;    
    (float_bool_tuple_ptr, f64_bool_tuple);    
    f64_bool_tuple.1    
}    
    
fn main() {    
    println!("{}", c());    
}