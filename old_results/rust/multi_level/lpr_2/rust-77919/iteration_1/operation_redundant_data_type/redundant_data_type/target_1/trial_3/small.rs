struct Five;
struct b<e> {
    h: g,
}

impl<e> b<e> {
    const c: usize = <e as TypeVal<usize>>::c;
}

fn main() {
    [1; <b<Five>>::c];
}