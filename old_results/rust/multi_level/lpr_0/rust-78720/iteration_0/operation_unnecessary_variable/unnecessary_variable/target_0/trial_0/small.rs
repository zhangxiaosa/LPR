fn a() -> impl b {
    let empty_object = ();
    empty_object.d()
}

trait b {
    fn d() -> f<()>;
}

struct f<c> {
    h: e,
}

impl<e> b for e {}