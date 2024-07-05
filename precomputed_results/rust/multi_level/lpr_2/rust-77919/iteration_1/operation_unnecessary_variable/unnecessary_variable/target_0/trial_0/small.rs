trait TypeVal<d> {
    const c: d;
}

struct b<e> {
    h: g,
}

impl<e> TypeVal<usize> for b<e> where e: TypeVal<c> {}

enum ConstFive {}
impl TypeVal<usize> for ConstFive {
    const c: usize = 5;
}

fn main() {
    [1; <b<ConstFive>>::c];
}