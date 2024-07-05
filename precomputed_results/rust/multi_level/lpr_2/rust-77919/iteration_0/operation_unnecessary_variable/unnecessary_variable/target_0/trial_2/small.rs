trait TypeVal<D> {
    const C: D;
}

struct B<E, F> {
    h: G,
}

impl<E, F> TypeVal<usize> for B<E, F> where E: TypeVal<()> {}

fn main() {
    [1; 2];
}