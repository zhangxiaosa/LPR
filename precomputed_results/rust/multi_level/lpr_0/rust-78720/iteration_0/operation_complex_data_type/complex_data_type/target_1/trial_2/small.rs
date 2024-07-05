fn a() -> String {
    let empty_closure = "";
    let empty_object: () = ();

    empty_object.d(empty_closure)
}

trait b {
    fn d<e>(self, e) -> f<e> {}
}

struct f<c> {
    h: e,
}

impl<e> b for e {}