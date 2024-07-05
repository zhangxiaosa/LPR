fn a() -> f<c> {
    "".d()
}

trait b {
    fn d(self) -> f<c> {}
}

struct f<c> {
    h: c,
}

impl<c> b for f<c> {}