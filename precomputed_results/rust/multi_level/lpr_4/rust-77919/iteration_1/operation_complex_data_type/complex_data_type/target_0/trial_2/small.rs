trait TypeVal<d> {
    const c: d;
}

struct Five;

struct b {}

impl TypeVal<usize> for b where Five: TypeVal<usize> {
    const c: usize = Five::c;
}

fn main() {
    let length: usize = b::c;
    let array: [i32; b::c] = [1; length];
}