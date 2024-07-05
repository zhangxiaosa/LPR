fn main() {
    assert_eq!(
        {
            while 2 == 0 {}
            let mut l = 0;
            l |= 1;
            let result = 2;
            4 * result % 5
        },
        3
    );
}