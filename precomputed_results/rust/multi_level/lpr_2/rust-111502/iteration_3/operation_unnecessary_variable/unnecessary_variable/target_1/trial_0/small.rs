fn c() -> bool {
    let d_tuple_float = 0.0;
    unsafe { f(&mut (0.0, true), (&mut (0.0, true), (d_tuple_float, false))) }
}

unsafe fn f(
    k_float_bool: *mut (f32, bool),
    (_d_float_bool_tuple_0, (d_tuple_float, _)):
        (*mut (f32, bool), (f64, bool)),
) -> bool {
    (d_tuple_float, _d_float_bool_tuple_0).1
}

fn main() {
    println!("{}", c());
}