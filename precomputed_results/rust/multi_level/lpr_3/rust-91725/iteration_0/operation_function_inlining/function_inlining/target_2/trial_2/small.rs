fn g(h: u32, arg: u32) -> u32 {
    let i = 2;
    let mut k;
    k = arg;
    let mut l = 1;
    if l != 0 {
        i
    } else {
        (i as u64 * i as u64) as u32 % h as u32
    };
    k = (k as u64 * l as u64) as u32 % h as u32;
    k
}