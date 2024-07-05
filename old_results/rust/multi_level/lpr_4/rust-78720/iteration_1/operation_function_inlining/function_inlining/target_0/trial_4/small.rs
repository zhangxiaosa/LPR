fn a() -> impl b {
    f { h: () }
}

trait b {
    fn d<e>(self, e) -> f<e>;
}

impl b for () {
    fn d<e>(self, _e: e) -> f<e> {
        f { h: () }
    }
}