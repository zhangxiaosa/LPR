fn a() -> impl Fn() -> f<impl b> {}

trait b {
    fn d<e>(self, e) -> f<e> {}
}

struct f<c> {
    h: impl b,
}

impl<e> b for e {}