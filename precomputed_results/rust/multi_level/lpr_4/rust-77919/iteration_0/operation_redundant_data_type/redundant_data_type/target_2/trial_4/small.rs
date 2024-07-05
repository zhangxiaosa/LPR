trait TypeVal<d> {
    const c: d;
}

struct Five;

struct b {
    h: g,
}

impl TypeVal<usize> for b where Five: TypeVal<c> {}

fn main() {
    [1; <b>::c];
}