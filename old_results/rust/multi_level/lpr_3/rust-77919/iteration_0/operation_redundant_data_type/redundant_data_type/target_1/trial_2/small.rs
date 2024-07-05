trait TypeVal<d> {
    const c: d;
}

struct Five;
struct b<e, f> {
    h: g,
}

impl<e, f> usize for b<e, f> where e: usize {}

fn main() {
    [1; b::<Five, Five>::c];
}