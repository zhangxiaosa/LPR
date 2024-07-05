trait TypeVal<d> {
    // No need to include the unused constant c
}

struct Five;

struct b<e, f> {
    h: g,
}

impl<e, f> TypeVal<usize> for b<e, f> where e: TypeVal<c> {}

fn main() {
    [1; <b<Five, Five>>::c];
}