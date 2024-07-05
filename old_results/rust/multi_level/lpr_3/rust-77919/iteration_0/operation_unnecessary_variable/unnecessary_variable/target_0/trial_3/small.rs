trait TypeVal<d> {}

struct Five;

struct b<e, f> {
    h: g,
}

impl<e, f> TypeVal<usize> for b<e, f> {}

fn main() {
    [1; b::<Five, Five>::c];
}