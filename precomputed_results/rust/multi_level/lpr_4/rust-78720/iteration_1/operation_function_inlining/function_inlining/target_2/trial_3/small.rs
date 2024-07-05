fn a() -> impl b {
    f { h: || "" }
}

trait b {
    fn d<e>(self, e) -> f<e> {
        f { h: e }
    }
}

struct f<c> {
    h: c,
}

impl<e> b for e {}