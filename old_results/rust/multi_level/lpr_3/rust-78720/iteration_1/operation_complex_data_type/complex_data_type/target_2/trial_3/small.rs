fn a() -> impl b {
    let empty_closure = || "";
    let result = {}.d(empty_closure);
    result
}

trait b {
    fn d<e>(self, e) -> f<e>;
}

struct f<e> {
    h: e,
}

impl<e> b for e {}