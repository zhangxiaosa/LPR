fn c() {
    let a_raw_ptr: *const u32 = {
        let b: *const u32;
        b = &b;
        b
    };
    let a_local: *const u32 = a_raw_ptr;
}