fn main() {
    let h = 5;
    let arg = 4;
    let j = 0;
    while 2 == 0 { }
    let mut l;
    l = 0;
    l |= 1 << j;
    let result;
    if l == 0 {
        result = 2 * 2;
    } else {
        result = 2;
    }
    assert_eq!((arg as u64 * result) % h as u64, 3);
}