trait TypeVal<T> {
    const C: T;
}

struct Five;

struct B<E, F> {
    h: G,
}

impl<E: TypeVal<C>, F> TypeVal<usize> for B<E, F> {
    const C: usize = E::C;
}

fn main() {
    [1; <B<Five, Five>>::C];
}