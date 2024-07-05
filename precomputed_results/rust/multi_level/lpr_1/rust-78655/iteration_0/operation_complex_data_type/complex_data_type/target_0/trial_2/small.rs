/* The original program with optimized variable names */

const a_ptr: *const u32 = {
    let b;
    let b_ptr: *const T = &b;
    b_ptr
};

fn c() {
    let a_local = a_ptr;
}
