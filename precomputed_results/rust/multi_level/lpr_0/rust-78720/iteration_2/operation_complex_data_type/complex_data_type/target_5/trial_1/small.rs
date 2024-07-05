fn a() -> impl b {
    "".d(|| "")
}

trait b {
    fn d<T>(self, T) -> F<T>;
}

struct F<C> {
    h: C,
}

impl<E> b for E {}

// Target to be optimized
let h: E;
