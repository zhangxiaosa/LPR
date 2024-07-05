fn a() -> impl b {
    f::<_>{h: || ""}
}

trait b {
    fn d<e>(self, e) -> f<e>;
}

struct f<c> {
    h: e,
}

impl<e> b for e {}