fn c() -> bool {
    let a_3 = false;
    unsafe {
        f((core::ptr::null_mut(), 0.0, a_3), true);
        f((core::ptr::null_mut(), 0.0, a_3), true);
        f((core::ptr::null_mut(), 0.0, a_3), true);
        f((core::ptr::null_mut(), 0.0, a_3), true);
    }
}