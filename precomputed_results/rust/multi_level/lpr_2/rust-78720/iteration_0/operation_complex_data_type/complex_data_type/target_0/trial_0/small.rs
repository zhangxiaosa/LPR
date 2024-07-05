fn a() -> impl b {
    let empty_dict = {};
    empty_dict.d(|| "".to_string())
}

trait b {
    fn d<e>(self, e) -> f<e> {}
}

struct f<c> {
    h: c,
}

impl<e> b for e {}