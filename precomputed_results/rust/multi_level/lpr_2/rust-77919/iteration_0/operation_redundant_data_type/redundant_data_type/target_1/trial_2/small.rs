struct Five;
struct b<e, f> {
    h: g,
}

impl<e, f> TypeVal for b<e, f> where e: TypeVal {
}

fn main() {
    [1; b<Five, Five>::c];
}