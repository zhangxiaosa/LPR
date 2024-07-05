fn main() {
    let b = 4;
    let mut c = 1u32;
    (0..b as usize).for_each(|e| {
        let f = b / (e as u32);
        let base = e.pow(2 * f);
        c *= base + 1;
    });
    assert_eq!(c, 650);
}