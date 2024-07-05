const C_VALUE: usize = 1;

struct Five;

struct b<e, f> {
    h: g,
}

impl<e, f> TypeVal<usize> for b<e, f> where e: TypeVal<usize> {
    const C: usize = C_VALUE;
}

fn main() {
    let c_value = <b<Five, Five>>::C;
    let array_length = [1; c_value];
}