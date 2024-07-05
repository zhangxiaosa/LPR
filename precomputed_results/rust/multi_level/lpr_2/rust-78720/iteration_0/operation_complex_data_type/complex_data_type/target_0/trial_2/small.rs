fn a() -> impl b {
    let empty_structure = {};
    let closure = || "";
    empty_structure.d(closure)
}

trait b {
    fn d<e>(self, e) -> f<e> {}
}

struct f<c> {
    h: c,
}

impl<e> b for e {}