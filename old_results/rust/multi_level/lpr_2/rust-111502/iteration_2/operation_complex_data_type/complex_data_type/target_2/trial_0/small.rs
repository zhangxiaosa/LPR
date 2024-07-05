fn c() -> bool {
    unsafe {
        f(
            &mut (0.0 as f32),
            &mut true,
            &mut (0.0 as f32),
            &mut true,
            true,
            true,
        )
    }
}

unsafe fn f(
    k_float_ptr: *mut f32,
    k_bool_ptr: *mut bool,
    d_float_ptr: *mut f32,
    d_bool_ptr: *mut bool,
    g: bool,
    _: bool,
) -> bool {
    let i_bool_ptr = core::ptr::addr_of!((*d_float_ptr, *d_bool_ptr).1) as *mut bool;
    *i_bool_ptr = true;
    (*d_float_ptr, *d_bool_ptr);
    (*d_float_ptr, *d_bool_ptr).1
}

fn main() {
    println!("{}", c());
}