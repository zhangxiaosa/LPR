fn c() -> bool {
    unsafe { f((&mut (0.0, true), (0.0, false))) }
}

unsafe fn f(d_float_bool_tuple: (*mut (f32, bool), (f64, bool))) -> bool {
    // Optimized out the variable i_bool_ptr
    true
}

fn main() {
    println!("{}", c());
}