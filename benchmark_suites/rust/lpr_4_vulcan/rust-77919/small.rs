trait TypeVal<Five> {
    const c: usize;
}
struct Five;
impl TypeVal<Five> for Five where Five: TypeVal<c> {}
fn auto() {
    [1; Five::c];
}
