fn a() -> impl b {
    let empty_closure: || -> String = || "".to_string();
    let empty_string: String = "".to_string();
    let result: f<String> = empty_string.d(empty_closure);
    result
}

trait b {
    fn d<e>(self, e) -> f<e> {}
}

struct f<c> {
    h: c,
}

impl<e> b for e {}
