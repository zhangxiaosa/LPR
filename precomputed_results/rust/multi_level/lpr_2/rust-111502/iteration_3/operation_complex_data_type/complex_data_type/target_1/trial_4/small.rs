fn c() -> bool {
    let mut d_tuple_float: f64 = 0.0;
    let mut d_bool: bool = false;

    unsafe {
        f(
            &mut (0.0, true),
            &mut d_tuple_float,
            &mut d_bool,
        )
    }
}

unsafe fn f(
    k_float_bool: *mut (f32, bool),
    d_tuple_float: *mut f64,
    d_bool: *mut bool,
) -> bool {
    *d_bool = true;
    *d_bool
}

fn main() {
    println!("{}", c());
}