fn a() -> impl B {
    let empty_struct = EmptyStruct {};
    let argument = "";
    empty_struct.d(argument)
}

trait B {
    fn d<E>(self, e: E) -> F<E>;
}

struct F<C> {
    h: C,
}

impl<E> B for E {}
