fn c() -> bool {
    unsafe { f(0.0, false) }
}

unsafe fn f(d_float: f64, b_bool: bool) -> bool {
    let i_bool_ptr = &mut b_bool as *mut bool;
    *i_bool_ptr = true;
    b_bool
}

fn main() {
    println!("{}", c());
}