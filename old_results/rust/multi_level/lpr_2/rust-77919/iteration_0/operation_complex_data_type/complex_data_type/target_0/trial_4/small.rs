trait TypeVal<d> {
    const c: d;
}

struct Five;

struct b<e, f> {
    h: g,
}

impl<e, f> TypeVal<usize> for b<e, f> where e: TypeVal<c> {}

fn main() {
    const c: usize = <b<Five, Five>>::c;
    let target_optimization: usize = Five;
    [1; c];
}