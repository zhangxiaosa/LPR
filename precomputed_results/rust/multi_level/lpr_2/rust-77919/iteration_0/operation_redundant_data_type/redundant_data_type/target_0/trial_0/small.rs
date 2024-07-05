trait TypeVal<d> {
    const c: d;
}

struct b<e, f> {
    h: g,
}

impl<e, f> TypeVal<usize> for b<e, f> where e: TypeVal<usize> {}

fn main() {
    [1; <b<usize, usize>>::c];
}
