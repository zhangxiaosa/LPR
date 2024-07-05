const a: *const u32 = {
    let b;
    &b
};

// Inlined function c()
let a = a;
