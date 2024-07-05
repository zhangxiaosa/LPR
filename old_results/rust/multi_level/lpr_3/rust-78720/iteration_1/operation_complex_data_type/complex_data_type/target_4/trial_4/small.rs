fn a() -> f {
    f { h: "" }
}

trait b {
    fn d<e>(self, e) -> f<e>;
}

struct f<c> {
    h: &'static str,
}

impl<e> b for e {}