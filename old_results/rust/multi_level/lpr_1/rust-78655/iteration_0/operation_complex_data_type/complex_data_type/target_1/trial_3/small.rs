const a_ptr: *mut u32 = {
    let b = 0;
    let temp = &mut b;
    temp as *mut u32
};

fn c() {
    let a = a_ptr;
}
