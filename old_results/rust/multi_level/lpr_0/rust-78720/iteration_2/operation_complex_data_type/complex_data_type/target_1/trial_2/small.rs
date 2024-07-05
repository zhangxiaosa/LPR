trait b {
    fn d<e>(self, e) -> f<e> {}
}

struct f<c> {
    h: c,
}

impl<e> b for e {}

fn a() -> impl b {
    "".d(())
}