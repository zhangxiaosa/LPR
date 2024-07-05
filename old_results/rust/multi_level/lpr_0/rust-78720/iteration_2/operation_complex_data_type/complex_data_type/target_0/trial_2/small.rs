fn a() -> f<String> {
    let string_value: String = String::new();
    string_value.d(|| "")
}

trait b {
    fn d<e>(self, e) -> f<e> {}
}

struct f<c> {
    h: c,
}

impl<e> b for e {}