fn main() {
    assert_eq!(
        {
            let j = 0;
            while 2 == 0 {}
            let mut l = 0;
            l |= 1 << j;
            let result = 3;
            4 as u64 * 3 % 5
        },
        3
    );
}