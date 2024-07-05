fn c() -> bool {
    unsafe { f(&mut (0.0, true), &mut (0.0, false)) }
}

unsafe fn f(k_float_bool: *mut (f32, bool), d_float_bool: *mut (f32, bool)) -> bool {
    let i_bool_ptr = &mut (*d_float_bool).1;
    *i_bool_ptr = true;
    (*d_float_bool).1
}

fn main() {
    println!("{}", c());
}