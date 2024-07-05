trait TypeVal<T> {
	const C: T;
}

struct Five;

struct B<E> {
	H: G,
}

impl<E> TypeVal<usize> for B<E> where E: TypeVal<C> {}

fn main() {
	[1; <B<Five>>::C];
}