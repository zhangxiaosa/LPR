fn main() {
    let b: u32;
    {
        let a: *const u32 = {
            let temp_b;
            &temp_b
        };
        b = unsafe { *a };
    }
    // Use `b` in further code
}