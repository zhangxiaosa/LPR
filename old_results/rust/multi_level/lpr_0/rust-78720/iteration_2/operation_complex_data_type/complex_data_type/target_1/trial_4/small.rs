let EMPTY_STRING: &str = "";

struct F<T> {
    h: T,
}

trait B {
    fn d<e>(self, e) -> F<e>;
}

impl<E> B for E {}

fn a() -> impl B {
    EMPTY_STRING.d(|| EMPTY_STRING)
}