trait TypeVal<d> {
    const c: d;
}

struct b<e> {
    h: g,
}

impl<e> TypeVal<usize> for b<e> where e: TypeVal<Five> {}

fn main() {
    [1; <b<Five>>::c];
}