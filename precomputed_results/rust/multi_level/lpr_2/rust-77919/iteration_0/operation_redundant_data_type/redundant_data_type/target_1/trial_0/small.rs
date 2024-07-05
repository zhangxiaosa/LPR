struct Five;
struct b<e, f> {
    h: g,
}

impl<e, f> b<e, f> {
    const c: usize = 0;
}

fn main() {
    [1; <b<Five, Five>>::c];
}