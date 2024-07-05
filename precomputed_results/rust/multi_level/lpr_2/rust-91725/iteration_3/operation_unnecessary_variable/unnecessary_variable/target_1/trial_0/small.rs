fn main() {
    assert_eq!(
        {
            let j = 0;
            while 2 == 0 {}
            4 as u64 * if 0 == 0 { 4 } else { 2 } %5
        },
        3
    );
}