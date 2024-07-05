const C_VALUE: usize = Five::c;

struct Five;
struct B {
    h: G,
}

trait TypeVal {
    const C: usize;
}

impl TypeVal for Five {
    const C: usize = 0;
}

impl<T> TypeVal for B where T: TypeVal {
    const C: usize = T::C;
}

struct G;

fn main() {
    let array = [1; C_VALUE];
}