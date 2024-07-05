fn a(b: &i32) -> &i32 {
    // 'c' is optimized out
    b
}

fn d() {}
