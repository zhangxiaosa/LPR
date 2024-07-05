fn main() {
    let j = 0;
    let mut l = 0;
    l |= 1 << j;
    let result = 2 * 2;
    ((4 as u64 * result) % 5 as u64) as u32;
    assert_eq!(((4 as u64 * result) % 5 as u64) as u32, 3);
}