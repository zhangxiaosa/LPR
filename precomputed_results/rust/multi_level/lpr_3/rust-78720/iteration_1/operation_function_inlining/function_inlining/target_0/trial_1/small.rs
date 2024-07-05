trait b {
    fn d<e>(self, e) -> f<e>;
}

struct f<c> {
    h: c,
}

fn a() -> f<&'static str> {
    f { h: "" }
}
