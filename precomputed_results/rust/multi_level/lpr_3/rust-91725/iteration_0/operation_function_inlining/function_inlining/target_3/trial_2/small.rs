fn g(h: u32, arg: u32) -> u32 {
    let i = 2;
    let j = 0;
    let mut k;
    k = arg;
    let mut l;
    l = 0;
    l |= 1 << j;
    let result = ((((k as u64 * (1 << j) as u64) % h as u64) as u32 as u64 * (1 << j) as u64) % h as u64) as u32;
    result
}

fn main() {
    assert_eq!(g(5, 4), 3);
}