const C: usize = Five::c;

struct Five;
struct B<E, F> {
    h: G,
}

impl<E, F> TypeVal<usize> for B<E, F> where E: TypeVal<C> {}

fn main() {
    let size = [1; C];
}