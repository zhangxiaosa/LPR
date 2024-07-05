fn a() -> impl b {
    let empty_closure = || ""; // String
    let empty_object = {}; // Unit

    empty_object.d(empty_closure)
}

trait b {
    fn d<e>(self, e) -> f<e> {}
}

struct f<c> {
    h: e,
}

impl<e> b for e {}
