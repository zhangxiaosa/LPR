fn c() -> bool {
    unsafe { f(&mut (0.0, true), (&mut (0.0, true), (0.0, false))) }
}

unsafe fn f(
    k_float_bool: *mut (f32, bool),
    d_float_bool_tuple: (*mut (f32, bool), (f64, bool)),
) -> bool {
    d_float_bool_tuple.1.1 = true;
    d_float_bool_tuple.1.1
}

fn main() {
    println!("{}", c());
}