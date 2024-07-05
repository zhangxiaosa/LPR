fn main() {
    let h = 5;
    let arg = 4;
    let i = 2;
    let j = 0;
    while 2 == 0 {}
    let mut k;
    k = arg;
    let mut l_0 = 0;
    l_0 |= 1 << j;
    let l_1 = l_0;
    let l_2 = ((i as u64 * l_1 as u64) % h as u64) as u32;
    let mut k = ((k as u64 * l_2 as u64) % h as u64) as u32;

    assert_eq!(k, 3);
}