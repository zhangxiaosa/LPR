fn main() {
    assert_eq!({
        let j = 0;
        while 2 == 0 {}
        let mut l = 0;
        l |= 1 << j;
        let result;
        if l == 0 {
            result = 4
        } else {
            result = 2
        }
        4 as u64 *  result % 5
    }, 3);
}