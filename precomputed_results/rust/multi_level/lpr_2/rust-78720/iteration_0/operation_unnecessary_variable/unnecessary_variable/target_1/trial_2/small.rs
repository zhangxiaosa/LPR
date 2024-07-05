fn a() -> impl b {
    {}.d(|| "")
}

trait b {
    fn d<e>(self, e) -> f<e> {}
}

struct f<e> {
    h: e,
}

impl<e> b for e {}
