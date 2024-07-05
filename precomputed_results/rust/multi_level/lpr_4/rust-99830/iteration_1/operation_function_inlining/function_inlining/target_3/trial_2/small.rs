fn main() {
    let mut c = d(1);
    (2..4).for_each(|_e| {
        let val1 = d(_e as u32).pow(2 * (4 / _e as u32)) + d(1);
        c *= val1.pow(2);
    });
    assert_eq!(c.0, 650);
}