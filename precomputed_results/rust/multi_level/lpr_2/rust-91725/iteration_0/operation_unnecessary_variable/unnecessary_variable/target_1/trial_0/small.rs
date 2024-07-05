fn g(h: u32, arg: u32) -> u32 {
    let mut k;
    k = arg;
    let result;
    if 0 == 0 {
        result = 2 * 2;
    } else {
        result = 2;
    }
    k = ((k as u64 * result) % h as u64) as u32;
    k
}

fn main() {
    assert_eq!(g(5, 4), 3);
}