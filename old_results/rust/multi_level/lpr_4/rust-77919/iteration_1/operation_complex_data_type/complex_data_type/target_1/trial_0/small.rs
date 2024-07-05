struct b {}

const C_VALUE: usize = 5;

trait TypeVal {
    const C: usize;
}

impl TypeVal for b {
    const C: usize = C_VALUE;
}

fn main() {
    [1; b::C];
}