trait TypeVal<d> {
    const c: d;
}

struct Five;

struct b<f> {
    h: g,
}

impl<f> TypeVal<usize> for b<Five, f> {}

fn main() {
    const c: usize = <b<Five, Five>>::c;
    [1; c];
}