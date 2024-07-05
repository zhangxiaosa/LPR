trait TypeVal<d> {
    const c: d;
}

struct b {
    h: g,
}

impl TypeVal<usize> for b where g: TypeVal<u32> {
    const c: usize = 5;
}

fn main() {
    [1; <b>::c];
}
