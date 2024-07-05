fn a() -> impl b {
    {}.d("")
}

trait b {
    fn d(self, e: &str) -> f<&str>;
}

struct f<T> {
    h: T,
}

impl<T> b for T {}