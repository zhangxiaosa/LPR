fn a() -> MyStruct {
    let empty_closure = empty_closure();
    let empty_object = ();

    empty_object.d(empty_closure)
}

trait b {
    fn d<e>(self, e) -> MyGenericStruct<e> {}
}

struct MyGenericStruct<T> {
    h: T,
}

impl<e> b for e {}

fn empty_closure() -> &'static str {
    ""
}