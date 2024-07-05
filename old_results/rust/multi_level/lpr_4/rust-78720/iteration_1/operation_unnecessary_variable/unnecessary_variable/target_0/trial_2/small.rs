fn a() -> impl b {
    {}.d(|| "")
}

trait b {
    fn d<e>(self, e) -> f<e> {}
}

impl<e> b for e {}
