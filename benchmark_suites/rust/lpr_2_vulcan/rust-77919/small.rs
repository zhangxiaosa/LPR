trait TypeVal<Five> {
    const c: usize;
}
struct Five;
struct b<Five> {
    c: Five,
}
impl TypeVal<Five> for b<Five> where Five: TypeVal<c> {}
fn auto() {
    [1; b::c];
}
