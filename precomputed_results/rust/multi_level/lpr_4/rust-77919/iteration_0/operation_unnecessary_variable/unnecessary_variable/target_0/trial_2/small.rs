trait TypeVal<d> {
    const c: d;
}
struct b {}
impl TypeVal<usize> for b {}
fn main() {
    [1; b::c];
}