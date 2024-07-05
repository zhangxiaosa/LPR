trait TypeVal<d> {
    const c: d;
}

struct Five;

impl TypeVal<usize> for Five {}

fn main() {
    [1; <Five>::c];
}