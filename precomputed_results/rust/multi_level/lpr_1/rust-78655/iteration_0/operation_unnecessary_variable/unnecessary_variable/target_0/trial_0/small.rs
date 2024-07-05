const a: *const u32 = {
    let b;
    &b
};

fn c() {
    // c() function remains unchanged
}