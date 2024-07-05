fn a() -> impl b {
    let empty_closure: fn() -> &'static str = || "";
    let empty_string: &'static str = "";
    empty_string.d(empty_closure)
}

trait b {
    fn d<e>(self, e) -> f<e> {}
}

struct f<c> {
    h: e,
}

impl<e> b for e {}