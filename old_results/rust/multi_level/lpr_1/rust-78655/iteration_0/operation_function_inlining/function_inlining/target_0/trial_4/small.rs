const a: *const u32 = {
    let b;
    &b
};

fn c() {
    // Empty function after inlining
}

{
    let a = a;
}