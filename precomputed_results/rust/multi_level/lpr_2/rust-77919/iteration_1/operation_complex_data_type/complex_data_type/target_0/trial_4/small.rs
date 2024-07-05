const C_VALUE: usize = 0;

struct Five;
struct b<e> {
    h: g,
}

impl<e> TypeVal<usize> for b<e> where e: TypeVal<C_VALUE> {}

fn main() {
    const ARRAY_SIZE: usize = b<Five>::C_VALUE;
    let arr: [usize; ARRAY_SIZE] = [1; ARRAY_SIZE];
}
