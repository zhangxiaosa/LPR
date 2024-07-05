const a: *const u32 = {
    let b;
    &b
};

// Optimization: Function inlining - Replace `c()` call with its body
let a = a;
