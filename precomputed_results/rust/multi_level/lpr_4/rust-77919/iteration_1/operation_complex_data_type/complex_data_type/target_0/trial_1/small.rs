trait TypeVal<d> {
    const c: usize;
}

struct Five;
struct b {}

impl TypeVal<usize> for b where Five: TypeVal<usize> {}

fn main() {
    [1; b::c];
}