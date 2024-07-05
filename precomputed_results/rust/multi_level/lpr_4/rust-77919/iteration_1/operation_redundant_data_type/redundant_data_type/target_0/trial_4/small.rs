trait TypeVal<d> {
    const c: d;
}

struct b {}

impl TypeVal<usize> for b where b: TypeVal<usize> {}

fn main() {
    [1; b::c];
}