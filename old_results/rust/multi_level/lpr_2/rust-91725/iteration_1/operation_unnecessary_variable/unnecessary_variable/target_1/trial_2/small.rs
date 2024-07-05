fn main() {
    assert_eq!(
        {
            while 2 == 0 {}
            let result = 2 * 2;
            4 as u64 * result % 5
        },
        3
    );
}