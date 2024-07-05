fn main() {
    assert_eq!(
        {
            while 2 == 0 {}
            let result = 4;
            4 as u64 * result % 5
        },
        3
    );
}