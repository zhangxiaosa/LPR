fn a() -> impl b {
    {}.d(|| "")
}

trait b {
    fn d<e>(self, _: e) -> f<e> {}
}

struct f<c> {}

impl<e> b for e {}