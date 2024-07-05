fn a() -> impl B {
    let empty_string = "".to_string();
    let generic = EmptyGeneric {};
    empty_string.d(generic)
}

trait B {
    fn d<E>(self, e: E) -> F<E>;
}

struct F<C> {
    h: C,
}

struct EmptyGeneric {}

impl<E> B for String {
    fn d<E>(self, e: E) -> F<E> {
        F { h: e }
    }
}

impl<E> B for EmptyGeneric {
    fn d<F>(self, _: F) -> F {
        panic!("This implementation is not used in the program")
    }
}