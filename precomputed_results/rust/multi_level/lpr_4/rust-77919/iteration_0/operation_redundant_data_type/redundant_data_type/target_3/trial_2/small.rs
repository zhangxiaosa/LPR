struct b {
    h: g,
}

impl b {
    const c: usize = 5;
}

fn main() {
    [1; b::c];
}