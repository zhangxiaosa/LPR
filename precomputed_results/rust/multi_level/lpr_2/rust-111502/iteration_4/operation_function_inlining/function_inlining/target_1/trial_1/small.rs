fn c() -> bool {
    unsafe {
        let d_float_bool_tuple = (&mut (0.0, true), (0.0, false));
        let i_bool_ptr = core::ptr::addr_of!(d_float_bool_tuple.1 .1) as *mut bool;
        *i_bool_ptr = true;
        d_float_bool_tuple.1 .1
    }
}

fn main() {
    println!("{}", c());
}