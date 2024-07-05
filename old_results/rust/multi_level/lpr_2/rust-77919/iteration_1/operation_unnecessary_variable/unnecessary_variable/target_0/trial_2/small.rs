trait TypeVal<d> {
    const c: d;
}

struct Five;
struct b<e> {
    h: g,
}

impl<e> TypeVal<usize> for b<e> where e: TypeVal<1> {}

fn main() {
    [1; <b<Five>>::c];
}