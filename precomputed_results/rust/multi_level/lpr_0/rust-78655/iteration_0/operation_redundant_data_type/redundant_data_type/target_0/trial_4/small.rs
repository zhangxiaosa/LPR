fn c() {
    let a: *const u32 = {
        let b;
        &b
    };
    let a = a;
}