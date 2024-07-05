trait TypeVal<d> {
    const c: d;
}

struct b<e, f> {
    h: g,
}

impl<e, f> TypeVal<usize> for b<e, f> where e: TypeVal<c> {}

fn main() {
    const c: usize = <b<>>::c;
    [1; c];
}