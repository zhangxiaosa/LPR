fn c() -> bool {
    unsafe {
        let i_bool_ptr = core::ptr::addr_of!((0.0, false).1 .1) as *mut bool;
        *i_bool_ptr = true;
        (0.0, false).1 .1
    }
}

fn main() {
    println!("{}", c());
}