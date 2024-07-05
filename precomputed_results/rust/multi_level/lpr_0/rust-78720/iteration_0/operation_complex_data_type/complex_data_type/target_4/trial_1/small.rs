fn a() -> impl b {
    let empty_closure: fn() -> &str = || "";
    let empty_object: () = ();

    empty_object.d(empty_closure)
}

trait b {
    fn d<e, F: FnOnce() -> e>(self, e: F) -> f<e> {}
}

struct f<c, e> {
    h: e,
}

impl<e> b for e {}