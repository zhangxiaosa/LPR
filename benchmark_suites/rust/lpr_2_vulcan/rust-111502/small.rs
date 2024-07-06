fn c() -> bool {
    unsafe { f((&(0.0, true), (0.0, true))) }
}
unsafe fn f(d_float_bool_tuple: (*const (f64, bool), (f64, bool))) -> bool {
    let i_bool_ptr = core::ptr::addr_of!(d_float_bool_tuple.1 .1) as *mut bool;
    *i_bool_ptr ^= true;
    d_float_bool_tuple;
    d_float_bool_tuple.1 .1
}
fn main() {
    println!("{}", c());
}
