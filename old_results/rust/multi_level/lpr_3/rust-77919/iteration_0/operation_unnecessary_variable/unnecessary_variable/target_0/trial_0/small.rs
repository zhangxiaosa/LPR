trait TypeVal<d> {
    const c: d;
}

struct Five;

struct b<e, f> {
    h: g,
}

impl<e, f> TypeVal<usize> for b<e, f> where e: TypeVal<c> {}

fn main() {
    let c = b::<Five, Five>::c;
    [1; c];
}
