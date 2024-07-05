struct Five;

struct b<e, f> {
    h: g,
}

fn main() {
    let _ = [1; <b<Five, Five>>::h];
}
