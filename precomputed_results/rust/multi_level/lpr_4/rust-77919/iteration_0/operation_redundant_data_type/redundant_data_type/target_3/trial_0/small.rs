trait TypeVal<d> {
    const c: d;
}

struct Five;

struct b {
    h: g,
}

// No implementation for TypeVal<usize> for b

fn main() {
    [1; <b>::c]; // Replace <b>::c with usize
}