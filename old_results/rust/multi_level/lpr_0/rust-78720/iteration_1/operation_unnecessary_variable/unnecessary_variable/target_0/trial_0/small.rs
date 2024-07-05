fn a() -> impl b {
    let empty_closure = || "";
    "".d(empty_closure)
}

trait b {
    fn d<e>(self, e) -> f<()> {}
}

struct f<e> {
    h: e,
}

impl<e> b for e {}