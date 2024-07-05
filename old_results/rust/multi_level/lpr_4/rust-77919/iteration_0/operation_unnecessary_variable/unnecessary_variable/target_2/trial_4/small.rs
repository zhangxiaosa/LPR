trait TypeVal<d> {
    // No const 'c' in trait definition
}

struct Five;
struct b {}

impl TypeVal<usize> for b where Five: TypeVal<c> {}

fn main() {
    [1; b::c]; // Variable 'c' optimized out
}