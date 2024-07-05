struct Five;
struct b<e> {
    h: g,
}
impl<e> b<e> {
    const c: usize = 0;
}
fn main() {
    [1; <b<Five>>::c];
}