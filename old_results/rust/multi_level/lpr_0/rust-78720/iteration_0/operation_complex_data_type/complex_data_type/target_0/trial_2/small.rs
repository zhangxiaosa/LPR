fn a() -> impl b {
    empty_struct.d(|| "")
}

trait b {
    fn d<e>(self, e) -> f<e> {}
}

struct f<c> {
    h: e,
}

impl<e> b for e {}
