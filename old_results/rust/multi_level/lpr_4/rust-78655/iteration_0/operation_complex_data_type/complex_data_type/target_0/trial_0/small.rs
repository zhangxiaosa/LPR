fn main() {
    let a: usize = {
        let b: u32 = 0;
        &b as *const u32 as usize
    };

    let optimized_a = &b as *const u32 as usize;
}