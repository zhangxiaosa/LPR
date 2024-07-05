fn main() {
    let a_ptr: *const u32 = {
        let b: u32 = 0;
        &b
    };
}