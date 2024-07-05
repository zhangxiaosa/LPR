fn d() -> u64 {
    const e: i32 = 7;
    const f: i32 = 1 << 12;
    const w: usize = f as usize;
    let mut ac = [false; w];
    let mut ad = [0i32; 1 << e];
    let mut o: [[i32; 2]; 16] = Default::default();
    o[1][0] = std::i32::MAX;
    match n(e, &o, f, f, 0, &mut ac, &mut ad) {
        j::k(s) => s,
        l => 0,
    }
}
fn main() {
    assert_eq!(d(), 20_313_839_404_245);
}
