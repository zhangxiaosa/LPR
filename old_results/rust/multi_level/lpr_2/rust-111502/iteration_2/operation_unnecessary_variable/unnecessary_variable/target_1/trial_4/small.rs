fn c() -> bool {
    unsafe { f(&mut (0.0, true), (0.0, false), true) }
}

unsafe fn f(
    k_float_bool: *mut (f32, bool),
    _: (f64, bool),
    g: bool,
) -> bool {
    let i_bool_ptr = core::ptr::addr_of!(1usize) as *mut bool; // Optimized out
    *i_bool_ptr = true; // Optimized out
    true
}

fn main() {
    println!("{}", c());
}