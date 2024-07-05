fn a() -> impl b {
    f { h: () }
}

trait b {
    fn d<e>(self, e) -> f<e>;
}

struct f<c> {
    h: c,
}

impl<e> b for e {
    fn d<e>(self, e: e) -> f<e> {
        f { h: e }
    }
}