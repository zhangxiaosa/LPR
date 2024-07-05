trait TypeVal<d> {
    const c: d;
}
struct Five;
struct b<e, f> {
    h: g,
}
impl<e, f> TypeVal<usize> for b<e, f> where e: TypeVal<original_data_type_3> {}
fn main() {
    [1; <b<original_data_type_1, original_data_type_2>>::original_data_type_3];
}