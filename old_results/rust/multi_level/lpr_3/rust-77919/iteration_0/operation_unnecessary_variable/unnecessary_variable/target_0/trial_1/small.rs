trait TypeVal {
    const c: usize;
}

struct b {
    h: g,
}

impl TypeVal for b {
    const c: usize = 1;
}

fn main() {
    [1; b::c];
}