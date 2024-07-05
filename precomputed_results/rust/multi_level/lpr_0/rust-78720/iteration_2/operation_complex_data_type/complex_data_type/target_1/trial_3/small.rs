struct f<T> {
    h: T,
}

trait b {
    fn d<T>(self, arg: T) -> f<T>;
}

impl<T> b for T {
    fn d<U>(self, arg: U) -> f<U> {
        f { h: arg }
    }
}

fn a() -> impl b {
    "".d(|| "")
}