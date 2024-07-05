fn a() -> impl b {
    let empty_closureFn: fn() -> &str = || "";
    "".d(empty_closureFn)
}

trait b {
    fn d<e>(self, e) -> f<e> {}
}

struct f<c> {
    h: e,
}

impl<e> b for e {}