trait TypeVal<C> {
    const C: usize;
}
struct Five;
struct B<Five> {
    Five: Five,
}
impl<Five: TypeVal<C>> TypeVal<Five> for B<Five> {}
fn auto() {
    [1; <B<Five>>::C];
}
