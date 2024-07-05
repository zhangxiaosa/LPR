const a: *const u32 = {
    let b;
    &b
};

// Inlined version of function c()
{
    let a = a;
}