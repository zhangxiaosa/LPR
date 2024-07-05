trait TypeVal<d> {
    const c: d;
}

struct Five;

impl TypeVal<usize> for Five {
    const c: usize = 5;
}

fn main() {
    [1; Five::c];
}