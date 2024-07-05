fn a() -> impl b {
    let empty_closure: fn() -> &str = || ""; // Function pointer returning string reference
    let empty_object: () = (); // Unit type

    empty_object.d(empty_closure)
}

trait b {
    fn d<e>(self, e) -> f<e> {}
}

struct f<c> {
    h: c,
}

impl<e> b for e {}
