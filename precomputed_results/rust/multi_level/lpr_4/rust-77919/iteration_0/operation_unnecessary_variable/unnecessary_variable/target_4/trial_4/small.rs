trait TypeVal<d> {}

struct Five;
struct b {}

impl TypeVal<()> for b where Five: TypeVal<()> {}

fn main() {
    [1; b::c];
}