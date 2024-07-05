trait TypeVal<d> {
    const c: usize;
}

struct Five;

struct b<e> {
    h: g,
}

impl<e> TypeVal<usize> for b<e> where e: TypeVal<usize> {}

fn main() {
    [1; b<Five>::c];
}