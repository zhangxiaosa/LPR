fn main() {
    let mut c = 1u32;
    (0..4u32).for_each(|e| {
        let f = 4 / e;
        c *= e.pow(2 * f) + 1;
    });
}