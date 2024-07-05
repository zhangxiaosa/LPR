fn g(h: u32, arg: u32) -> u32 {
    let i = 2;
    let j = 0;
    
    let mut k = arg;
    let mut l = 0;
    l |= 1 << j;

    // Inlined expression of function e
    l = {
        if j == 0 {
            ((i as u64 * l as u64) % h as u64) as u32
        } else {
            l
        }
    };

    // Inlined expression of function c
    k = {
        ((k as u64 * l as u64) % h as u64) as u32
    };

    k
}

fn main() {
    assert_eq!(g(5, 4), 3);
}