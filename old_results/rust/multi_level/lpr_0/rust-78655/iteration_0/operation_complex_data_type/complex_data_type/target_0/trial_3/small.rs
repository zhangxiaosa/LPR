let a: *const u32 = {
    let b: u32 = 0;
    &b
};

fn c() {
    let inner_a: *const u32 = a;
}