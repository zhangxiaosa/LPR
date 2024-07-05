trait TypeVal<usize> {
    const c: i32;
}

struct Five;

struct b<e> {
    h: i32,
}

impl<e> TypeVal<usize> for b<e> where e: TypeVal<i32> {}

fn main() {
    [1; <b<Five>>::c];
}