fn c() {
    let a: *const u32 = {
        let b: u32 = 0;
        &b
    };
    let a = a;
}