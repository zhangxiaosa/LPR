const b: &() = std::mem::transmute(10);
fn c() {
    match &() {
        b => 9,
    };
}