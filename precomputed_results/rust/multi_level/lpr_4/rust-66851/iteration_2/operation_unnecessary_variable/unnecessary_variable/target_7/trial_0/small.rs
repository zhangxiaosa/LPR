fn d() -> u64 {
    // Removed enum j
    // Function n remains the same
    // Initialization and loops remain the same
    // References to j::k and j::m replaced with constant values

    let mut ac = [false; 8192];
    let mut ad = [0i32; 128];
    let o = Default::default();
    match n(&o, 4096, 4096, 0, &mut ac, &mut ad) {
        20_313_839_404_245 => 20_313_839_404_245,
        _ => 0,
    }
}

fn main() {
    assert_eq!(d(), 20_313_839_404_245);
}