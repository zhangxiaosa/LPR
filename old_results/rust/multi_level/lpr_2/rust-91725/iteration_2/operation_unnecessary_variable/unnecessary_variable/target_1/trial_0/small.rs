fn main() {
    assert_eq!(
        {
            let j = 0;
            while 2 == 0 {}
            let result = if (1 << j) == 0 { 2 * 2 } else { 2 };
            4 as u64 * result % 5
        },
        3
    );
}