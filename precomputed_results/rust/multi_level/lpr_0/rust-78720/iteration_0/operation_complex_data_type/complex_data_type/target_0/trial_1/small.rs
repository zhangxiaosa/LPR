fn a() -> impl b {
    let empty_object = ();
    empty_object.d(|| "");
}

trait b {
    fn d<e>(self, e) -> f<e> {}
}

struct f<c> {
    h: c,
}

impl<e> b for e {}
