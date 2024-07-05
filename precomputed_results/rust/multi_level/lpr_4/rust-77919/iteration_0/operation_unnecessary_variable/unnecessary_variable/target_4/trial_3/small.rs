trait TypeVal<d> {
    const c: d;
}

struct Five;
struct b {}

impl TypeVal<usize> for b where Five: TypeVal<usize> {}

fn main() {
    [1; 5];
}