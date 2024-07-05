trait TypeVal<d> {
    const c: d;
}

struct Five;

struct b<e, f> {
    h: g,
}

impl<e, f> TypeVal<usize> for b<e, f> where e: TypeVal<usize> {
    const c: usize = <e as TypeVal<usize>>::c;
}

fn main() {
    [1; <b<usize, usize>>::c];
}