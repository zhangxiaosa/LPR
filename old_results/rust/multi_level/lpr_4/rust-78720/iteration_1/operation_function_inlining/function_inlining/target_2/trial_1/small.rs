fn a() -> impl b {
    f { h: || "" }
}

trait b {
    fn d<e>(self, e) -> f<e>;
}

struct f<c> {
    h: || "",
}

impl<e> b for e {}
