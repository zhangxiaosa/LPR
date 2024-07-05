fn main() {
    assert_eq!(a(4), 650);
}

fn a(b: u32) -> u32 {
    let mut c: u32 = 1;
    (0..b as usize)
        .for_each(|e| c *= e as u32 * 2 * (b / e as u32) + 1);
    c
}