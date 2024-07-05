fn a() -> impl b {
    {}.d(|| "")
}

trait b {
    fn d(self, e) -> f<e> {}
}

struct f<e> {
    h: e,
}

impl<e> b for e {}
