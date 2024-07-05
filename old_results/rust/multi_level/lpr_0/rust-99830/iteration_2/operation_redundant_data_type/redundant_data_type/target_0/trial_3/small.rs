fn main() {
    let mut c = 1u32;
    for e in 0..4 {
        let mut other = e.pow(2 * (4 / e)) + 1;
        c *= other;
    }
    assert_eq!(c, 650);
}