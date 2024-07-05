fn main() {
    let h = 5;
    let arg = 4;
    let i = 2;
    let j = 0;

    let mut k;
    k = arg;
    let mut l;
    l = 0;
    l |= 1 << j;
    l = ((i as u64 * l as u64) % h as u64) as u32;
    k = ((k as u64 * l as u64) % h as u64) as u32;

    let mut k_2;
    k_2 = arg;
    let mut l_2;
    l_2 = 0;
    l_2 |= 1 << j;
    l_2 = ((i as u64 * l_2 as u64) % h as u64) as u32;
    k_2 = ((k_2 as u64 * l_2 as u64) % h as u64) as u32;

    assert_eq!(k, 3);
}