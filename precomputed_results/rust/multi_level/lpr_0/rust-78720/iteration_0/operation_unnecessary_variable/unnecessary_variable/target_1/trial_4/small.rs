fn a() -> impl b {
    let empty_closure = || "";
    empty_closure.d()
}

trait b {
    fn d<e>(self) -> f<e> {}
}

struct f<c> {
    h: e,
}

impl<e> b for e {}
