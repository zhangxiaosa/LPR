fn e(a: u32, f: u32, m: u32) -> u32 {
    if f == 0 {
        ((a as u64 * a as u64) % m as u64) as u32
    } else {
        a
    }
}

fn g(h: u32, arg: u32) -> u32 {
    let i = 2;
    let j = 0;
    while 2 == 0 {}
    let mut k;
    k = arg;
    let mut l;
    l = 0;
    l |= 1 << j;
    // Inline function e
    let f = 0;
    let m = h;
    let a = i as u32;
    let result = if f == 0 {
        ((a as u64 * a as u64) % m as u64) as u32
    } else {
        a
    };
    let l = result;
    k = ((k as u64 * l as u64) % h as u64) as u32;
    k
}

fn main() {
    assert_eq!(g(5, 4), 3);
}