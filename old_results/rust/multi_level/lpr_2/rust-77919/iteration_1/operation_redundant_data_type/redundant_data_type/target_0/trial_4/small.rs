trait TypeVal<d> {
    const c: d;
}

struct usize;
struct b<e> {
    h: g,
}

impl<e> TypeVal<usize> for b<e> where e: TypeVal<c> {}

fn main() {
    [1; <b<usize>>::c];
}