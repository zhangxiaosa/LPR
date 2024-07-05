trait TypeVal<d> {
    const c: d;
}

struct Five;

struct b<e> {
    // The variable g is not used.
}

impl<e> TypeVal<usize> for b<e> where e: TypeVal<c> {}

fn main() {
    const c: usize = <b<Five>>::c;
    [1; c];
}