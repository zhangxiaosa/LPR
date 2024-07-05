fn g(h: u32, arg: u32) -> u32 {
    let i = 2;
    let j = 0;
    if h == 0 {
        ((i as u64 * i as u64) % (1 << j) as u64) as u32
    } else {
        i
    }
}

fn main() {
    assert_eq!(g(5, 4), 3);
}