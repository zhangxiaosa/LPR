fn a() -> impl b {
    let empty_closure = || "";
    let empty_string: &'static str = "";
    empty_string.d(empty_closure)
}

trait b {
    fn d<T>(self, t: T) -> f<T> {}
}

struct f<C> {
    h: C,
}

impl<T> b for T {}
