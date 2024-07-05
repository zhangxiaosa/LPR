trait TypeVal<d> {
    const c: d;
}

struct Five;
struct b {}

impl TypeVal<usize> for b
where
    Five: TypeVal<c>,
{
    const c: usize = 1;
}

fn main() {
    [1; b::c];
}
