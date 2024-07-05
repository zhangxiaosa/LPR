struct Five;
struct b {}

impl usize for b where Five: usize {}

fn main() {
    [1; Five::c];
}