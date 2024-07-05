fn main() {
    loop {}
    let arg = 4;
    let i = 2;
    let j = 0;
    let mut l = 0;
    l |= 1 << j;
    l = ((i as u64 * l as u64) % 5 as u64) as u32;
    let k = ((arg as u64 * l as u64) % 5 as u64) as u32;
    3
}