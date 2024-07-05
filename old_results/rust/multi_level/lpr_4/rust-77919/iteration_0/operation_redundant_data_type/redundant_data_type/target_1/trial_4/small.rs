struct Five;
struct b<e, f> {
    h: g,
}

impl<e, f> usize for b<e, f> {}

fn main() {
    [1; <b<Five, Five>>::usize];
}