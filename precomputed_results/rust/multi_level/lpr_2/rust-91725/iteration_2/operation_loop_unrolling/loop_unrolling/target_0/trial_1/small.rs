fn main() {
    assert_eq!(
        {
            let mut l = 0;
            l |= 1 << 0;
            let result = if l == 0 { 2 * 2 } else { 2 };
            4 as u64 * result % 5
        },
        3
    );
}