trait TypeVal<d> {
    type C: d;
}

struct Five;

struct b<e, f> {
    h: g,
}

impl<e, f> TypeVal<usize> for b<e, f> where e: TypeVal<usize> {}

fn main() {
    [1; <b<Five, Five> as TypeVal<usize>>::C];
}