const a: *const u32 = {
    let _;
    &b
};

fn c() {
    let a = a;
}