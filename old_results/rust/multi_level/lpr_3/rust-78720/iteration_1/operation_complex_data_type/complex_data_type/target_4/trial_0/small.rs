fn a() -> impl b {
    let empty_string: String = "".to_string();
    let implementation = {}.d(empty_string);
    implementation
}

trait b {
    fn d<e>(self, e) -> f<e>;
}

struct f<c> {
    h: c,
}

impl<e> b for e {}
