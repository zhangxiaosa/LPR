fn a() -> SomeType {
    let empty_closure = || String::new();
    let empty_object = ();

    empty_object.d(empty_closure)
}

trait b {
    fn d<E>(self, E) -> F<E> {}
}

struct F<C> {
    h: C,
}

impl<E> b for E {}