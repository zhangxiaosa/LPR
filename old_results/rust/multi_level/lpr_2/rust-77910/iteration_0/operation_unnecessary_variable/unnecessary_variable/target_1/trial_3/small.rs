fn a(_: &i32) -> &i32 {
    // The target variable "c" is unused, so it can be optimized out.
}

fn d() {
    // The target variable "c" is unused, so it can be optimized out.
}