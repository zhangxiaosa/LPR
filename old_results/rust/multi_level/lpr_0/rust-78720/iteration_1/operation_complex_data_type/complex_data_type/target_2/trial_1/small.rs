fn a() -> impl b {
    let empty_closure = || "";
    let h = empty_closure();
    f { h }
}

trait b {
    fn d(self, e: impl Fn() -> &str) -> f<&str>;
}

struct f<'a, T> {
    h: T,
}

impl<'a, T> b for T {}