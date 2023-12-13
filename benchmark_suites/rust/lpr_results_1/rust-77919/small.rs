struct b {
    h: g,
}

impl TypeVal<usize> for b {
    const c: usize = 0;
}

fn main() {
    [1; <b as TypeVal<usize>>::c];
}
