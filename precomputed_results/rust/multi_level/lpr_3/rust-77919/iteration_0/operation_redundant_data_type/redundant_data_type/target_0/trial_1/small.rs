trait TypeVal<d> {
    const c: d;
}

struct Five;

struct b<e, f> {
    h: g,
}

impl<e, f> TypeVal<usize> for b<e, f> where e: TypeVal<struct Five> {}

fn main() {
    [1; b::<struct Five, struct Five>::c];
}