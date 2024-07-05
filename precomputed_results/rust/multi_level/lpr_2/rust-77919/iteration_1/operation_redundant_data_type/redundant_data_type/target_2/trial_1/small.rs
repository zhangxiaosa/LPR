trait TypeVal<d> {
    const c: d;
}

struct Five;

impl TypeVal<usize> for Five {
    const c: usize = 0; // Replace 0 with the desired value for TypeVal<usize>
}

fn main() {
    [1; <Five>::c];
}