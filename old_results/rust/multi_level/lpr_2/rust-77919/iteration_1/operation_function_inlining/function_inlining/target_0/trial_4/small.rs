struct Five;
struct b<e> {
    h: g,
}
impl<e> TypeVal<usize> for b<e> {
    const c: usize = 5;
}

fn main() {
    [1; <b<Five>>::c];
}