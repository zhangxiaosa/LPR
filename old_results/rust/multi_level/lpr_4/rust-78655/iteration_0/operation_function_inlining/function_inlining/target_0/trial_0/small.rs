const a: *const u32 = {
    let b;
    &b
};

// Inline the `c()` function body
{
    let a = a;
}