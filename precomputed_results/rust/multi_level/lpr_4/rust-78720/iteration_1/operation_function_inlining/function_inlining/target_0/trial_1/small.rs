fn a() -> impl b {
    f::<&str> {
        h: || ""
    }
}

trait b {
    fn d<e>(self, e) -> f<e> {}
}

struct f<c> {
    h: e,
}

impl<e> b for e {}
