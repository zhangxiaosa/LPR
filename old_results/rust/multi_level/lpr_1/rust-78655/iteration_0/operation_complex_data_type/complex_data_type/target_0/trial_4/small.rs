const a_ptr: *const u32 = {
    let b;
    &b
};

fn c() {
    let a_value = unsafe { *a_ptr };
    let a = a_value;
}
