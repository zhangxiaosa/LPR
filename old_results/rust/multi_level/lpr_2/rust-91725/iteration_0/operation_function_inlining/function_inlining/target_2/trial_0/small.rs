fn g(h: u32, arg: u32) -> u32 {
    let i = 2;
    let j = 0;

    let l = 1 << j;

    if arg == 0 {
        ((i as u64 * i as u64) % h as u64) as u32
    } else {
        let k = ((arg as u64 * ((i as u64 * i as u64) % h as u64) as u64) % h as u64) as u32;
        ((i as u64 * i as u64) % h as u64) as u32
    }
}

fn main() {
    assert_eq!(g(5, 4), 3);
}