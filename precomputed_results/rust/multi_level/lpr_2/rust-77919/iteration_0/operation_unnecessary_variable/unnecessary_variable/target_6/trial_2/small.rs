trait TypeVal<d> {
    const c: d;
}

struct Five;

struct b<e> {
    h: g,
}

impl<e> TypeVal<usize> for b<e> where e: TypeVal<c> {}

fn main() {
    const c: usize = <b<Five>>::c;
    [1; <b<Five>>::c];
}