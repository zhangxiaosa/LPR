trait TypeVal<d> {
    const c: d;
}

struct b {}

impl TypeVal<usize> for b {
    const c: usize = 5;
}

fn main() {
    [1; b::c];
}