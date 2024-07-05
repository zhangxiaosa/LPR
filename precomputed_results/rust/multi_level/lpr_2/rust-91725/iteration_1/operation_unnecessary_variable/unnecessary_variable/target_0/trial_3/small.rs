fn main() {
    assert_eq!(
        {
            while 2 == 0 {}
            let mut l = 0;
            l |= 1 << 0;
            let result;
            if l == 0 {
                result = 2 * 2
            } else {
                result = 2
            }
            4 as u64 * result % 5
        },
        3
    );
}