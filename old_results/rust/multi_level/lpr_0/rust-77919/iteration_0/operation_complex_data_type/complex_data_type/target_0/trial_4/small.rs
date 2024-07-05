const C_Five: usize = <b<Five, Five>>::c;

struct Five;

struct B<E, F> {
    h: G,
}

impl<E, F> TypeVal<usize> for B<E, F> where E: TypeVal<C_Five> {}

fn main() {
    let arr: [usize; C_Five] = [1; C_Five];
}
