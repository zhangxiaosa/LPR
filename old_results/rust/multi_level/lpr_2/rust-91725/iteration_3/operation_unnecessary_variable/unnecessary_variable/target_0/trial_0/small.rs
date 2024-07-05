fn main() {
    assert_eq!(
        {
            while 2 == 0 {}
            let mut l = 0;
            l |= 1 << 0;
            4 as u64 * if l == 0 { 4 } else { 2 } % 5
        },
        3
    );
}